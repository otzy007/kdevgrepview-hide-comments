# Install script for directory: /home/oz/svn/kdevplatform/plugins/grepview

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "0")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib64/kde4/kdevgrepview.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib64/kde4/kdevgrepview.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib64/kde4/kdevgrepview.so"
         RPATH "/usr/local/lib64:/usr/lib64/qt/lib")
  ENDIF()
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib64/kde4/kdevgrepview.so")
FILE(INSTALL DESTINATION "/usr/local/lib64/kde4" TYPE MODULE FILES "/home/oz/svn/kdevplatform/lib/kdevgrepview.so")
  IF(EXISTS "$ENV{DESTDIR}/usr/local/lib64/kde4/kdevgrepview.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib64/kde4/kdevgrepview.so")
    FILE(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/local/lib64/kde4/kdevgrepview.so"
         OLD_RPATH "/home/oz/svn/kdevplatform/lib:/usr/lib64/qt/lib:"
         NEW_RPATH "/usr/local/lib64:/usr/lib64/qt/lib")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib64/kde4/kdevgrepview.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/kde4/services/kdevgrepview.desktop")
FILE(INSTALL DESTINATION "/usr/local/share/kde4/services" TYPE FILE FILES "/home/oz/svn/kdevplatform/plugins/grepview/kdevgrepview.desktop")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/apps/kdevgrepview/kdevgrepview.rc")
FILE(INSTALL DESTINATION "/usr/local/share/apps/kdevgrepview" TYPE FILE FILES "/home/oz/svn/kdevplatform/plugins/grepview/kdevgrepview.rc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/oz/svn/kdevplatform/plugins/grepview/tests/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

