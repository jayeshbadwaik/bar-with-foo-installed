add_executable(test_bar test_bar.cpp)
add_test(NAME test_bar COMMAND test_bar)
target_link_libraries(test_bar ${LIBNAME})


