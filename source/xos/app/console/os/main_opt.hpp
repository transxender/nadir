///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2022 $organization$
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
///   Date: 12/13/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_OS_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_OS_MAIN_OPT_HPP

#include "xos/app/console/version/main.hpp"

#define XOS_APP_CONSOLE_OS_MAIN_OS_OPT "os"
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_C "w" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_S "windows" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_C "x" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_S "osx" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_C "l" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_S "linux" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_C "p" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_S "posix" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_C "m" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_S "mach" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_C "s" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_S "solaris" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_C "o" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_S "os" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_C "n" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_S "none" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG \
    "[{ " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_S \
    " | " "(" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_C ")" XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_S \
    " }]" 
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTUSE "operating system"
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_S "o::"
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_C 'o'
#define XOS_APP_CONSOLE_OS_MAIN_OS_OPTION \
   {XOS_APP_CONSOLE_OS_MAIN_OS_OPT, \
    XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_OS_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_S \

#define XOS_APP_CONSOLE_OS_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_OS_MAIN_OS_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_OS_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_OS_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_OS_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_OS_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_OS_MAIN_ARGS 0
#define XOS_APP_CONSOLE_OS_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace os {

/// class main_optt
template 
<class TExtends = xos::app::console::version::main, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
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
    main_optt(const main_optt& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// ...run
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

    /// ...windows_os_option...
    virtual int on_set_windows_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_windows_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_windows_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_windows_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_windows_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

    /// ...osx_os_option...
    virtual int on_set_osx_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_osx_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_osx_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_osx_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_osx_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

    /// ...linux_os_option...
    virtual int on_set_linux_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_linux_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_linux_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_linux_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_linux_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

    /// ...posix_os_option...
    virtual int on_set_posix_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_posix_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_posix_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_posix_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_posix_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

    /// ...mach_os_option...
    virtual int on_set_mach_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_mach_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_mach_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_mach_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_mach_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

    /// ...solaris_os_option...
    virtual int on_set_solaris_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_solaris_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_solaris_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_solaris_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_solaris_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

    /// ...this_os_option...
    virtual int on_set_this_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_this_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_this_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_this_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_this_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

    /// ...no_os_option...
    virtual int on_set_no_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_no_os_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_no_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_no_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_no_os_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

    /// ...os_option...
    virtual int on_get_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_os_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_os_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_C)) 
                || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_WINDOWS_S))) {
                err = on_windows_os_option
                (optval, optarg, optname, optind, argc, argv, env);
            } else {
                if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_C)) 
                    || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACOSX_S))) {
                    err = on_osx_os_option
                    (optval, optarg, optname, optind, argc, argv, env);
                } else {
                    if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_C)) 
                        || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_LINUX_S))) {
                        err = on_linux_os_option
                        (optval, optarg, optname, optind, argc, argv, env);
                    } else {
                        if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_C)) 
                            || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_POSIX_S))) {
                            err = on_posix_os_option
                            (optval, optarg, optname, optind, argc, argv, env);
                        } else {
                            if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_C)) 
                                || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_MACH_S))) {
                                err = on_mach_os_option
                                (optval, optarg, optname, optind, argc, argv, env);
                            } else {
                                if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_C)) 
                                    || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_SOLARIS_S))) {
                                    err = on_solaris_os_option
                                    (optval, optarg, optname, optind, argc, argv, env);
                                } else {
                                    if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_C)) 
                                        || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_OS_S))) {
                                        err = on_this_os_option
                                        (optval, optarg, optname, optind, argc, argv, env);
                                    } else {
                                        if ((!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_C)) 
                                            || (!arg.compare(XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG_NONE_S))) {
                                            err = on_no_os_option
                                            (optval, optarg, optname, optind, argc, argv, env);
                                        } else {
                                            if (!(err = on_get_os_option(optarg, optind, argc, argv, env))) {
                                                if (!(err = on_os_option_get(optarg, optind, argc, argv, env))) {
                                                } else {
                                                }
                                            } else {
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (!(err = on_get_os_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_os_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* os_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_OS_MAIN_OS_OPTUSE;
        optarg = XOS_APP_CONSOLE_OS_MAIN_OS_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_C:
            err = this->on_os_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_OS_MAIN_OS_OPTVAL_C:
            chars = this->os_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_OS_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_OS_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_OS_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_OS_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace os
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_OS_MAIN_OPT_HPP
