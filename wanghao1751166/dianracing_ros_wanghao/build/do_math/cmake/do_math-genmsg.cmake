# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "do_math: 0 messages, 1 services")

set(MSG_I_FLAGS "-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(do_math_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv" NAME_WE)
add_custom_target(_do_math_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "do_math" "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(do_math
  "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/do_math
)

### Generating Module File
_generate_module_cpp(do_math
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/do_math
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(do_math_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(do_math_generate_messages do_math_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv" NAME_WE)
add_dependencies(do_math_generate_messages_cpp _do_math_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(do_math_gencpp)
add_dependencies(do_math_gencpp do_math_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS do_math_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages

### Generating Services
_generate_srv_eus(do_math
  "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/do_math
)

### Generating Module File
_generate_module_eus(do_math
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/do_math
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(do_math_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(do_math_generate_messages do_math_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv" NAME_WE)
add_dependencies(do_math_generate_messages_eus _do_math_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(do_math_geneus)
add_dependencies(do_math_geneus do_math_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS do_math_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services
_generate_srv_lisp(do_math
  "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/do_math
)

### Generating Module File
_generate_module_lisp(do_math
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/do_math
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(do_math_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(do_math_generate_messages do_math_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv" NAME_WE)
add_dependencies(do_math_generate_messages_lisp _do_math_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(do_math_genlisp)
add_dependencies(do_math_genlisp do_math_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS do_math_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages

### Generating Services
_generate_srv_nodejs(do_math
  "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/do_math
)

### Generating Module File
_generate_module_nodejs(do_math
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/do_math
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(do_math_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(do_math_generate_messages do_math_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv" NAME_WE)
add_dependencies(do_math_generate_messages_nodejs _do_math_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(do_math_gennodejs)
add_dependencies(do_math_gennodejs do_math_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS do_math_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(do_math
  "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/do_math
)

### Generating Module File
_generate_module_py(do_math
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/do_math
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(do_math_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(do_math_generate_messages do_math_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/currywong/dianracing_driverless_recruiting/wanghao1751166/dianracing_ros_wanghao/src/do_math/srv/Suan.srv" NAME_WE)
add_dependencies(do_math_generate_messages_py _do_math_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(do_math_genpy)
add_dependencies(do_math_genpy do_math_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS do_math_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/do_math)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/do_math
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(do_math_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/do_math)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/do_math
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(do_math_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/do_math)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/do_math
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(do_math_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/do_math)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/do_math
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(do_math_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/do_math)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/do_math\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/do_math
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(do_math_generate_messages_py std_msgs_generate_messages_py)
endif()
