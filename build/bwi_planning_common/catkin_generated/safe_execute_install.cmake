execute_process(COMMAND "/home/yohei/rl_ws/build/bwi_planning_common/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/yohei/rl_ws/build/bwi_planning_common/catkin_generated/python_distutils_install.sh) returned error code ")
endif()