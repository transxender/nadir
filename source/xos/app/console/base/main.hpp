//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2023 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 1/5/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_BASE_MAIN_HPP

#include "xos/app/console/base/main_opt.hpp"
#include "xos/io/string/reader.hpp"
#include "xos/io/crt/file/reader.hpp"
#include "xos/io/hex/read_to_string.hpp"

namespace xos {
namespace app {
namespace console {
namespace base {

//// class maint
template 
<class TExtends = xos::app::console::base::main_optt<>,  class TImplements = typename TExtends::implements>

class maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint(): run_(0), verbose_output_(false) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef xos::io::string::readert<xos::base::string, xos::io::reader> string_reader_t;
    typedef typename string_reader_t::string_t reader_string_t;
    typedef typename reader_string_t::char_t reader_char_t;
    typedef xos::io::hex::read_to_stringt<string_t> hex_read_to_string_t;
    typedef xos::io::hex::reader_to hex_reader_t;

    /// run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// ...output_option...
    virtual int on_set_verbose_output_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        set_verbose_output();
        return err;
    }
    virtual int on_set_quiet_output_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        set_quiet_output();
        return err;
    }

    /// ...hex_decode_source_to_string
    virtual int hex_decode_source_to_string(string_t& string, io::reader& source) {
        int err = 0;
        ssize_t count = 0, amount = 0;
        byte_t byte = 0;

        if (0 < (amount = source.read(&byte, 1))) {
            hex_read_to_string_t to_string_reader(string);
            hex_reader_t reader(to_string_reader, source);
            
            reader.on_begin(&byte, 1);
            do {
                if ((0 > (reader.on_read(&byte, 1)))) {
                    break;
                }
                count += amount;
                amount = source.read(&byte, 1);
            } while (0 < amount);
            reader.on_end(&byte, 1);
        }
        return err;
    }

    /// ...verbose_output
    virtual bool& set_quiet_output(bool to = true) {
        bool& verbose_output = this->verbose_output();
        verbose_output = !to;
        return verbose_output;
    }
    virtual bool& set_verbose_output(bool to = true) {
        bool& verbose_output = this->verbose_output();
        verbose_output = to;
        return verbose_output;
    }
    virtual bool& verbose_output() const {
        return (bool&)verbose_output_;
    }

protected:
    bool verbose_output_;
}; /// class maint 
typedef maint<> main;

} /// namespace base 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_BASE_MAIN_HPP
