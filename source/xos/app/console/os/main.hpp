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
///   File: main.hpp
///
/// Author: $author$
///   Date: 12/13/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_OS_MAIN_HPP
#define XOS_APP_CONSOLE_OS_MAIN_HPP

#include "xos/app/console/os/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace os {

/// class maint
template 
<class TExtends = xos::app::console::os::main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
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
    maint(): run_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
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
            if (!(err = extends::run(argc, argv, env))) {
            } else {
            }
        }
        return err;
    }

    /// ...derived_run
    virtual int derived_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_derived_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_derived_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_derived_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_derived_run(argc, argv, env))) {
            int err2 = 0;
            err = derived_run(argc, argv, env);
            if ((err2 = after_derived_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_derived_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_derived_run;
        return err;
    }
    virtual int derived_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...os_run
    virtual int os_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_derived_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_os_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_os_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_os_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_os_run(argc, argv, env))) {
            int err2 = 0;
            err = os_run(argc, argv, env);
            if ((err2 = after_os_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_os_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_os_run;
        return err;
    }
    virtual int os_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...posix_run
    virtual int posix_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_derived_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_posix_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_posix_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_posix_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_posix_run(argc, argv, env))) {
            int err2 = 0;
            err = posix_run(argc, argv, env);
            if ((err2 = after_posix_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_posix_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_posix_run;
        return err;
    }
    virtual int posix_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...linux_run
    virtual int linux_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_derived_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_linux_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_linux_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_linux_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_linux_run(argc, argv, env))) {
            int err2 = 0;
            err = linux_run(argc, argv, env);
            if ((err2 = after_linux_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_linux_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_linux_run;
        return err;
    }
    virtual int linux_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...osx_run
    virtual int osx_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_derived_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_osx_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_osx_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_osx_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_osx_run(argc, argv, env))) {
            int err2 = 0;
            err = osx_run(argc, argv, env);
            if ((err2 = after_osx_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_osx_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_osx_run;
        return err;
    }
    virtual int osx_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...mach_run
    virtual int mach_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_derived_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_mach_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_mach_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_mach_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_mach_run(argc, argv, env))) {
            int err2 = 0;
            err = mach_run(argc, argv, env);
            if ((err2 = after_mach_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_mach_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_mach_run;
        return err;
    }
    virtual int mach_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...solaris_run
    virtual int solaris_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_derived_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_solaris_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_solaris_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_solaris_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_solaris_run(argc, argv, env))) {
            int err2 = 0;
            err = solaris_run(argc, argv, env);
            if ((err2 = after_solaris_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_solaris_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_solaris_run;
        return err;
    }
    virtual int solaris_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...windows_run
    virtual int windows_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_derived_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_windows_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_windows_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_windows_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_windows_run(argc, argv, env))) {
            int err2 = 0;
            err = windows_run(argc, argv, env);
            if ((err2 = after_windows_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_windows_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_windows_run;
        return err;
    }
    virtual int windows_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...os_option...
    virtual int on_set_this_os_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_os_run(argc, argv, env))) {
                if (!(err = os_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace os
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_OS_MAIN_HPP
