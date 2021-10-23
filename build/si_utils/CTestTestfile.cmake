# CMake generated Testfile for 
# Source directory: /home/yohei/rl_ws/src/segway_v3/si_utils
# Build directory: /home/yohei/rl_ws/build/si_utils
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_si_utils_roslaunch-check_launch "/home/yohei/rl_ws/build/si_utils/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/yohei/rl_ws/build/si_utils/test_results/si_utils/roslaunch-check_launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/yohei/rl_ws/build/si_utils/test_results/si_utils" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/yohei/rl_ws/build/si_utils/test_results/si_utils/roslaunch-check_launch.xml' '/home/yohei/rl_ws/src/segway_v3/si_utils/launch' ")
subdirs(gtest)
