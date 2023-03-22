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
#   File: main.pro
#
# Author: $author$
#   Date: 3/19/2023
#
# os specific QtCreator project .pro file for nuasteraede framework nadir executable main
########################################################################
# Depends: rostra;nadir;fila;crono
#
# Debug: nadir/build/os/QtCreator/Debug/bin/main
# Release: nadir/build/os/QtCreator/Release/bin/main
# Profile: nadir/build/os/QtCreator/Profile/bin/main
#
include(../../../../../build/QtCreator/nadir.pri)
include(../../../../QtCreator/nadir.pri)
include(../../nadir.pri)
include(../../../../QtCreator/app/main/main.pri)

TARGET = $${main_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${main_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${main_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${main_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${main_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${main_HEADERS} \
$${main_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${main_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${main_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${main_LIBS} \
$${FRAMEWORKS} \

########################################################################
