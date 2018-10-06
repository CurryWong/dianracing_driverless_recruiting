# Install script for directory: /home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/send_messages

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/send_messages/cmake" TYPE FILE FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/build/send_messages/catkin_generated/installspace/send_messages-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/devel/share/roseus/ros/send_messages")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/devel/lib/python2.7/dist-packages/send_messages")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/devel/lib/python2.7/dist-packages/send_messages")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/build/send_messages/catkin_generated/installspace/send_messages.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/send_messages/cmake" TYPE FILE FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/build/send_messages/catkin_generated/installspace/send_messages-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/send_messages/cmake" TYPE FILE FILES
    "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/build/send_messages/catkin_generated/installspace/send_messagesConfig.cmake"
    "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/build/send_messages/catkin_generated/installspace/send_messagesConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/send_messages" TYPE FILE FILES "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/send_messages/package.xml")
endif()

