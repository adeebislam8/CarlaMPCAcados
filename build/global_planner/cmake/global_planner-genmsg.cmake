# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "global_planner: 2 messages, 2 services")

set(MSG_I_FLAGS "-Iglobal_planner:/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg;-Inav_msgs:/opt/ros/noetic/share/nav_msgs/cmake/../msg;-Iactionlib_msgs:/opt/ros/noetic/share/actionlib_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(global_planner_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg" NAME_WE)
add_custom_target(_global_planner_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "global_planner" "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg" ""
)

get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg" NAME_WE)
add_custom_target(_global_planner_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "global_planner" "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg" ""
)

get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/Frenet2WorldService.srv" NAME_WE)
add_custom_target(_global_planner_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "global_planner" "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/Frenet2WorldService.srv" "global_planner/WorldPose:global_planner/FrenetPose"
)

get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/World2FrenetService.srv" NAME_WE)
add_custom_target(_global_planner_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "global_planner" "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/World2FrenetService.srv" "global_planner/FrenetPose:global_planner/WorldPose"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/global_planner
)
_generate_msg_cpp(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/global_planner
)

### Generating Services
_generate_srv_cpp(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/Frenet2WorldService.srv"
  "${MSG_I_FLAGS}"
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg;/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/global_planner
)
_generate_srv_cpp(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/World2FrenetService.srv"
  "${MSG_I_FLAGS}"
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg;/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/global_planner
)

### Generating Module File
_generate_module_cpp(global_planner
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/global_planner
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(global_planner_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(global_planner_generate_messages global_planner_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg" NAME_WE)
add_dependencies(global_planner_generate_messages_cpp _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg" NAME_WE)
add_dependencies(global_planner_generate_messages_cpp _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/Frenet2WorldService.srv" NAME_WE)
add_dependencies(global_planner_generate_messages_cpp _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/World2FrenetService.srv" NAME_WE)
add_dependencies(global_planner_generate_messages_cpp _global_planner_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(global_planner_gencpp)
add_dependencies(global_planner_gencpp global_planner_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS global_planner_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/global_planner
)
_generate_msg_eus(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/global_planner
)

### Generating Services
_generate_srv_eus(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/Frenet2WorldService.srv"
  "${MSG_I_FLAGS}"
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg;/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/global_planner
)
_generate_srv_eus(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/World2FrenetService.srv"
  "${MSG_I_FLAGS}"
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg;/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/global_planner
)

### Generating Module File
_generate_module_eus(global_planner
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/global_planner
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(global_planner_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(global_planner_generate_messages global_planner_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg" NAME_WE)
add_dependencies(global_planner_generate_messages_eus _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg" NAME_WE)
add_dependencies(global_planner_generate_messages_eus _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/Frenet2WorldService.srv" NAME_WE)
add_dependencies(global_planner_generate_messages_eus _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/World2FrenetService.srv" NAME_WE)
add_dependencies(global_planner_generate_messages_eus _global_planner_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(global_planner_geneus)
add_dependencies(global_planner_geneus global_planner_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS global_planner_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/global_planner
)
_generate_msg_lisp(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/global_planner
)

### Generating Services
_generate_srv_lisp(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/Frenet2WorldService.srv"
  "${MSG_I_FLAGS}"
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg;/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/global_planner
)
_generate_srv_lisp(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/World2FrenetService.srv"
  "${MSG_I_FLAGS}"
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg;/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/global_planner
)

### Generating Module File
_generate_module_lisp(global_planner
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/global_planner
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(global_planner_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(global_planner_generate_messages global_planner_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg" NAME_WE)
add_dependencies(global_planner_generate_messages_lisp _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg" NAME_WE)
add_dependencies(global_planner_generate_messages_lisp _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/Frenet2WorldService.srv" NAME_WE)
add_dependencies(global_planner_generate_messages_lisp _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/World2FrenetService.srv" NAME_WE)
add_dependencies(global_planner_generate_messages_lisp _global_planner_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(global_planner_genlisp)
add_dependencies(global_planner_genlisp global_planner_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS global_planner_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/global_planner
)
_generate_msg_nodejs(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/global_planner
)

### Generating Services
_generate_srv_nodejs(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/Frenet2WorldService.srv"
  "${MSG_I_FLAGS}"
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg;/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/global_planner
)
_generate_srv_nodejs(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/World2FrenetService.srv"
  "${MSG_I_FLAGS}"
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg;/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/global_planner
)

### Generating Module File
_generate_module_nodejs(global_planner
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/global_planner
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(global_planner_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(global_planner_generate_messages global_planner_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg" NAME_WE)
add_dependencies(global_planner_generate_messages_nodejs _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg" NAME_WE)
add_dependencies(global_planner_generate_messages_nodejs _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/Frenet2WorldService.srv" NAME_WE)
add_dependencies(global_planner_generate_messages_nodejs _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/World2FrenetService.srv" NAME_WE)
add_dependencies(global_planner_generate_messages_nodejs _global_planner_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(global_planner_gennodejs)
add_dependencies(global_planner_gennodejs global_planner_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS global_planner_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/global_planner
)
_generate_msg_py(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/global_planner
)

### Generating Services
_generate_srv_py(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/Frenet2WorldService.srv"
  "${MSG_I_FLAGS}"
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg;/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/global_planner
)
_generate_srv_py(global_planner
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/World2FrenetService.srv"
  "${MSG_I_FLAGS}"
  "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg;/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/global_planner
)

### Generating Module File
_generate_module_py(global_planner
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/global_planner
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(global_planner_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(global_planner_generate_messages global_planner_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/WorldPose.msg" NAME_WE)
add_dependencies(global_planner_generate_messages_py _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/msg/FrenetPose.msg" NAME_WE)
add_dependencies(global_planner_generate_messages_py _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/Frenet2WorldService.srv" NAME_WE)
add_dependencies(global_planner_generate_messages_py _global_planner_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/adeeb/carla-ros-bridge/catkin_ws/src/global_planner/srv/World2FrenetService.srv" NAME_WE)
add_dependencies(global_planner_generate_messages_py _global_planner_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(global_planner_genpy)
add_dependencies(global_planner_genpy global_planner_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS global_planner_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/global_planner)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/global_planner
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(global_planner_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(global_planner_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET nav_msgs_generate_messages_cpp)
  add_dependencies(global_planner_generate_messages_cpp nav_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/global_planner)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/global_planner
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(global_planner_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(global_planner_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET nav_msgs_generate_messages_eus)
  add_dependencies(global_planner_generate_messages_eus nav_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/global_planner)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/global_planner
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(global_planner_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(global_planner_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET nav_msgs_generate_messages_lisp)
  add_dependencies(global_planner_generate_messages_lisp nav_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/global_planner)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/global_planner
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(global_planner_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(global_planner_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET nav_msgs_generate_messages_nodejs)
  add_dependencies(global_planner_generate_messages_nodejs nav_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/global_planner)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/global_planner\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/global_planner
    DESTINATION ${genpy_INSTALL_DIR}
    # skip all init files
    PATTERN "__init__.py" EXCLUDE
    PATTERN "__init__.pyc" EXCLUDE
  )
  # install init files which are not in the root folder of the generated code
  string(REGEX REPLACE "([][+.*()^])" "\\\\\\1" ESCAPED_PATH "${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/global_planner")
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/global_planner
    DESTINATION ${genpy_INSTALL_DIR}
    FILES_MATCHING
    REGEX "${ESCAPED_PATH}/.+/__init__.pyc?$"
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(global_planner_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(global_planner_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET nav_msgs_generate_messages_py)
  add_dependencies(global_planner_generate_messages_py nav_msgs_generate_messages_py)
endif()
