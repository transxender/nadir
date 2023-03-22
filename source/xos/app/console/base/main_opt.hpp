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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 1/5/2023, 3/22/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_BASE_MAIN_OPT_HPP

#include "xos/app/console/framework/version/main.hpp"

#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPT "file-input"
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTARG ""
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTUSE "file input"
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTVAL_S "i"
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTVAL_C 'i'
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTION \
   {XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPT, \
    XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPT "string-input"
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTARG ""
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTUSE "string input"
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTVAL_S "g"
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTVAL_C 'g'
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTION \
   {XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPT, \
    XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPT "verbose"
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTARG ""
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTUSE "verbose output"
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_S "v"
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_C 'v'
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTION \
   {XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPT, \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPT "quiet"
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTARG ""
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTUSE "quiet output"
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_S "q"
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_C 'q'
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTION \
   {XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPT, \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_S \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_S \

#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTION \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTVAL_S \
    XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTVAL_S \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_S \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_S \

#define XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTION \
    XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTION \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTION \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_VERSION_OPTIONS_CHARS \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_BASE_MAIN_VERSION_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OPTIONS_CHARS \
   XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_LOGGING_OPTIONS_CHARS

#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_LOGGING_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_LOGGING_OPTIONS_CHARS \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_LOGGING_OPTIONS_CHARS

#define XOS_APP_CONSOLE_BASE_MAIN_LOGGING_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_LOGGING_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_LOGGING_OPTIONS_CHARS

#define XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_LOGGING_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_BASE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace base {

/// class main_optt
template 
<class TExtends = xos::app::console::framework::version::maint<>,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt &copy) {
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

    /// ...file_input_option...
    virtual int on_set_file_input_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_file_input_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_file_input_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_file_input_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_file_input_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* file_input_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTUSE;
        optarg = XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTARG;
        return chars;
    }

    /// ...string_input_option...
    virtual int on_set_string_input_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_string_input_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_string_input_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_string_input_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_string_input_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* string_input_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTUSE;
        optarg = XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTARG;
        return chars;
    }

    /// ...verbose_output_option...
    virtual int on_set_verbose_output_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_verbose_output_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_verbose_output_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_verbose_output_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_verbose_output_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* verbose_output_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTUSE;
        optarg = XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTARG;
        return chars;
    }

    /// ...quiet_output_option...
    virtual int on_set_quiet_output_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_quiet_output_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_quiet_output_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_quiet_output_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_quiet_output_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* quiet_output_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTUSE;
        optarg = XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTVAL_C:
            err = this->on_file_input_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTVAL_C:
            err = this->on_string_input_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_C:
            err = this->on_verbose_output_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_C:
            err = this->on_quiet_output_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTVAL_C:
            chars = this->file_input_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTVAL_C:
            chars = this->string_input_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_C:
            chars = this->verbose_output_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_C:
            chars = this->quiet_output_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace base 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_BASE_MAIN_OPT_HPP
