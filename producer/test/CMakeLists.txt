include(GoogleTest)

add_executable(test_producer
	test_myclass.cpp
)
target_link_libraries(test_producer
	producer
	gtest_main
)

gtest_discover_tests(test_producer)
