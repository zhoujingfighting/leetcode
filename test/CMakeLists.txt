
file(GLOB_RECURSE TEST ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)
add_executable(
  leetcode_test
  ${TEST}
)
target_link_libraries(
  leetcode_test
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(leetcode_test)