# Install script for directory: /home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/do_math/srv" TYPE FILE FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/do_math/cmake" TYPE FILE FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/build/do_math/catkin_generated/installspace/do_math-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/devel/include/do_math")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/devel/share/roseus/ros/do_math")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/devel/share/common-lisp/ros/do_math")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/devel/share/gennodejs/ros/do_math")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/devel/lib/python2.7/dist-packages/do_math")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/devel/lib/python2.7/dist-packages/do_math")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/build/do_math/catkin_generated/installspace/do_math.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/do_math/cmake" TYPE FILE FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/build/do_math/catkin_generated/installspace/do_math-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/do_math/cmake" TYPE FILE FILES
    "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/build/do_math/catkin_generated/installspace/do_mathConfig.cmake"
    "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/build/do_math/catkin_generated/installspace/do_mathConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/do_math" TYPE FILE FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/package.xml")
endif()

