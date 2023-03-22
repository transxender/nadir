########################################################################
# Copyright (c) 1988-2023 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: main.pri
#
# Author: $author$
#   Date: 3/19/2023
#
# generic QtCreator project file for nuasteraede framework nadir executable main
########################################################################

########################################################################
# main

# main TARGET
#
main_TARGET = main

# main INCLUDEPATH
#
main_INCLUDEPATH += \
$${nadir_INCLUDEPATH} \

# main DEFINES
#
main_DEFINES += \
$${nadir_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# main OBJECTIVE_HEADERS
#
#main_OBJECTIVE_HEADERS += \
#$${NADIR_SRC}/xos/app/nadir/main.hh \

# main OBJECTIVE_SOURCES
#
#main_OBJECTIVE_SOURCES += \
#$${NADIR_SRC}/xos/app/nadir/main.mm \

########################################################################
# main HEADERS
#
main_HEADERS += \
$${NADIR_SRC}/xos/app/base/main.hpp \
$${NADIR_SRC}/xos/app/protocol/base/main.hpp \
$${NADIR_SRC}/xos/app/protocol/client/main.hpp \
\
$${NADIR_SRC}/xos/app/console/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/main.hpp \
\
$${NADIR_SRC}/xos/app/console/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/base/main.hpp \
\
$${NADIR_SRC}/xos/app/console/verbose/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/verbose/main.hpp \
\
$${NADIR_SRC}/xos/app/console/version/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/version/main.hpp \
\
$${NADIR_SRC}/xos/app/console/nadir/version/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/nadir/version/main.hpp \
\
$${NADIR_SRC}/xos/app/console/framework/version/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/framework/version/main.hpp \
\
$${NADIR_SRC}/xos/app/console/nadir/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/nadir/main.hpp \
\
$${NADIR_SRC}/xos/app/nadir/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/nadir/base/main.hpp \
$${NADIR_SRC}/xos/app/nadir/client/main_opt.hpp \
$${NADIR_SRC}/xos/app/nadir/client/main.hpp \
$${NADIR_SRC}/xos/app/nadir/main_opt.hpp \
$${NADIR_SRC}/xos/app/nadir/main.hpp \

# main SOURCES
#
main_SOURCES += \
$${NADIR_SRC}/xos/app/nadir/main_opt.cpp \
$${NADIR_SRC}/xos/app/nadir/main.cpp \

########################################################################
# main FRAMEWORKS
#
main_FRAMEWORKS += \
$${nadir_FRAMEWORKS} \

# main LIBS
#
main_LIBS += \
$${nadir_LIBS} \

########################################################################
# NO Qt
QT -= gui core
