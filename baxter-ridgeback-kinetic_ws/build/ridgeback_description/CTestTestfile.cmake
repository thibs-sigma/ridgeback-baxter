# CMake generated Testfile for 
# Source directory: /home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/ridgeback_description
# Build directory: /home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_description
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_ridgeback_description_roslaunch-check_launch_description.launch "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_description/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_description/test_results/ridgeback_description/roslaunch-check_launch_description.launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_description/test_results/ridgeback_description" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/thib/baxter-ridgeback-kinetic_ws/build/ridgeback_description/test_results/ridgeback_description/roslaunch-check_launch_description.launch.xml' '/home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/ridgeback_description/launch/description.launch' ")
subdirs(gtest)
