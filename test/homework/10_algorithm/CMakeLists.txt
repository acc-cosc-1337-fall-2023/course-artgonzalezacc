add_executable(hw_10_tests "10_algorithm_tests.cpp")
target_link_libraries(hw_10_tests hw_10_library)
add_test(NAME hw_10_tests COMMAND hw_10_tests -s)
