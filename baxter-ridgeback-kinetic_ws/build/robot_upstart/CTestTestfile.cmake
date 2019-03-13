# CMake generated Testfile for 
# Source directory: /home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/robot_upstart
# Build directory: /home/thib/baxter-ridgeback-kinetic_ws/build/robot_upstart
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_robot_upstart_roslint_package "/home/thib/baxter-ridgeback-kinetic_ws/build/robot_upstart/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thib/baxter-ridgeback-kinetic_ws/build/robot_upstart/test_results/robot_upstart/roslint-robot_upstart.xml" "--working-dir" "/home/thib/baxter-ridgeback-kinetic_ws/build/robot_upstart" "--return-code" "/opt/ros/kinetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/thib/baxter-ridgeback-kinetic_ws/build/robot_upstart/test_results/robot_upstart/roslint-robot_upstart.xml make roslint_robot_upstart")
add_test(_ctest_robot_upstart_nosetests_test "/home/thib/baxter-ridgeback-kinetic_ws/build/robot_upstart/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/thib/baxter-ridgeback-kinetic_ws/build/robot_upstart/test_results/robot_upstart/nosetests-test.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/thib/baxter-ridgeback-kinetic_ws/build/robot_upstart/test_results/robot_upstart" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/robot_upstart/test --with-xunit --xunit-file=/home/thib/baxter-ridgeback-kinetic_ws/build/robot_upstart/test_results/robot_upstart/nosetests-test.xml")
subdirs(gtest)
