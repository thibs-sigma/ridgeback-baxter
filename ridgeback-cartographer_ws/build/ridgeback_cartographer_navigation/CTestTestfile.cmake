# CMake generated Testfile for 
# Source directory: /home/thib/ridgeback-cartographer_ws/src/ridgeback_cartographer_navigation
# Build directory: /home/thib/ridgeback-cartographer_ws/build/ridgeback_cartographer_navigation
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_ridgeback_cartographer_navigation_roslaunch-check_launch_cartographer_demo.launch "/home/thib/ridgeback-cartographer_ws/build/ridgeback_cartographer_navigation/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thib/ridgeback-cartographer_ws/build/ridgeback_cartographer_navigation/test_results/ridgeback_cartographer_navigation/roslaunch-check_launch_cartographer_demo.launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/thib/ridgeback-cartographer_ws/build/ridgeback_cartographer_navigation/test_results/ridgeback_cartographer_navigation" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/thib/ridgeback-cartographer_ws/build/ridgeback_cartographer_navigation/test_results/ridgeback_cartographer_navigation/roslaunch-check_launch_cartographer_demo.launch.xml' '/home/thib/ridgeback-cartographer_ws/src/ridgeback_cartographer_navigation/launch/cartographer_demo.launch' ")
subdirs(gtest)
