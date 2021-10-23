# CMake generated Testfile for 
# Source directory: /home/yohei/rl_ws/src/bwi_common/utexas_gdc
# Build directory: /home/yohei/rl_ws/build/utexas_gdc
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_utexas_gdc_roslaunch-check_launch "/home/yohei/rl_ws/build/utexas_gdc/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/yohei/rl_ws/build/utexas_gdc/test_results/utexas_gdc/roslaunch-check_launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/yohei/rl_ws/build/utexas_gdc/test_results/utexas_gdc" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/yohei/rl_ws/build/utexas_gdc/test_results/utexas_gdc/roslaunch-check_launch.xml' '/home/yohei/rl_ws/src/bwi_common/utexas_gdc/launch' ")
subdirs(gtest)
