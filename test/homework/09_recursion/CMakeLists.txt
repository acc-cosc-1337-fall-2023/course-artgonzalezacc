add_executable(hw_09_tests "09_recursive_tests.cpp")
target_link_libraries(hw_09_tests hw_09_library)
add_test(NAME hw_09_tests COMMAND hw_09_tests -s)
