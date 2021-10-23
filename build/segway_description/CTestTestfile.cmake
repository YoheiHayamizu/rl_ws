# CMake generated Testfile for 
# Source directory: /home/yohei/rl_ws/src/segway_v3/segway_description
# Build directory: /home/yohei/rl_ws/build/segway_description
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_segway_description_roslaunch-check_launch "/home/yohei/rl_ws/build/segway_description/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/yohei/rl_ws/build/segway_description/test_results/segway_description/roslaunch-check_launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/yohei/rl_ws/build/segway_description/test_results/segway_description" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/yohei/rl_ws/build/segway_description/test_results/segway_description/roslaunch-check_launch.xml' '/home/yohei/rl_ws/src/segway_v3/segway_description/launch' ")
subdirs(gtest)
