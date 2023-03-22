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
///   Date: 3/22/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_NADIR_CLIENT_MAIN_HPP
#define XOS_APP_NADIR_CLIENT_MAIN_HPP

#include "xos/app/nadir/client/main_opt.hpp"

namespace xos {
namespace app {
namespace nadir {
namespace client {

/// class maint
template 
<class TMain = xos::app::protocol::client::maint<>,
 class TExtends = xos::app::nadir::client::main_optt<TMain>,  class TImplements = typename TExtends::implements>

class maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::main_t main_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint(): run_(0) {
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

    /// on...request_option...
    virtual int on_set_request_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        main_t& main = this->main();

        LOGGER_IS_LOGGED_INFO("main.on_set_request_option(optarg, optind, argc, argv, env)...");
        if (!(err = main.on_set_request_option(optarg, optind, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("..."<< err << " = main.on_set_request_option(optarg, optind, argc, argv, env)");
            if (!(err = this->set_main_run(argc, argv, env))) {
            } else {
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed "<< err << " = main.on_set_request_option(optarg, optind, argc, argv, env)");
        }
        return err;
    }
    virtual int on_request_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        main_t& main = this->main();

        LOGGER_IS_LOGGED_INFO("main.on_request_option_get(optarg, optind, argc, argv, env)...");
        if (!(err = main.on_request_option_get(optarg, optind, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("..."<< err << " = main.on_request_option_get(optarg, optind, argc, argv, env)");
            if (!(err = this->set_main_run(argc, argv, env))) {
            } else {
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed "<< err << " = main.on_request_option_get(optarg, optind, argc, argv, env)");
        }
        return err;
    }
    virtual int on_request_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        main_t& main = this->main();

        LOGGER_IS_LOGGED_INFO("main.on_request_option_set(optarg, optind, argc, argv, env)...");
        if (!(err = main.on_request_option_set(optarg, optind, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("..."<< err << " = main.on_request_option_set(optarg, optind, argc, argv, env)");
            if (!(err = this->set_main_run(argc, argv, env))) {
            } else {
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed "<< err << " = main.on_request_option_set(optarg, optind, argc, argv, env)");
        }
        return err;
    }

protected:
}; /// class maint 
typedef maint<> main;

} /// namespace client 
} /// namespace nadir 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_NADIR_CLIENT_MAIN_HPP
