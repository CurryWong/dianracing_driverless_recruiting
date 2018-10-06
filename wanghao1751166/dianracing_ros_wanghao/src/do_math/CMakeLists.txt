cmake_minimum_required(VERSION 2.8.3)
project(do_math)

find_package(catkin REQUIRED COMPONENTS roscpp std_msgs genmsg)
add_service_files(DIRECTORY srv FILES Suan.srv)
generate_messages(DEPENDENCIES std_msgs)
catkin_package()
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(wanghao_server src/wanghao_server.cpp)
target_link_libraries(wanghao_server ${catkin_LIBRARIES})
add_dependencies(wanghao_server do_math_gencpp)

add_executable(wanghao_client src/wanghao_client.cpp)
target_link_libraries(wanghao_client ${catkin_LIBRARIES})
add_dependencies(wanghao_client do_math_gencpp)
