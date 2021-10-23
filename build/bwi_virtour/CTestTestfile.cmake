# CMake generated Testfile for 
# Source directory: /home/yohei/rl_ws/src/bwi_common/bwi_virtour
# Build directory: /home/yohei/rl_ws/build/bwi_virtour
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_bwi_virtour_roslaunch-check_launch "/home/yohei/rl_ws/build/bwi_virtour/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/yohei/rl_ws/build/bwi_virtour/test_results/bwi_virtour/roslaunch-check_launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/yohei/rl_ws/build/bwi_virtour/test_results/bwi_virtour" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/yohei/rl_ws/build/bwi_virtour/test_results/bwi_virtour/roslaunch-check_launch.xml' '/home/yohei/rl_ws/src/bwi_common/bwi_virtour/launch' ")
subdirs(gtest)
