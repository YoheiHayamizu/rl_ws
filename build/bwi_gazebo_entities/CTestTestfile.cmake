# CMake generated Testfile for 
# Source directory: /home/yohei/rl_ws/src/bwi_common/bwi_gazebo_entities
# Build directory: /home/yohei/rl_ws/build/bwi_gazebo_entities
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_bwi_gazebo_entities_roslaunch-check_launch "/home/yohei/rl_ws/build/bwi_gazebo_entities/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/yohei/rl_ws/build/bwi_gazebo_entities/test_results/bwi_gazebo_entities/roslaunch-check_launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/yohei/rl_ws/build/bwi_gazebo_entities/test_results/bwi_gazebo_entities" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/yohei/rl_ws/build/bwi_gazebo_entities/test_results/bwi_gazebo_entities/roslaunch-check_launch.xml' '/home/yohei/rl_ws/src/bwi_common/bwi_gazebo_entities/launch' ")
subdirs(gtest)
