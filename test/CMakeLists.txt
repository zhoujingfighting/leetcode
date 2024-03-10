
file(GLOB_RECURSE TEST ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)
add_executable(
  leetcode_test
  ${TEST}
)
# add_dependencies(leetcode_test [tree, linklist])

target_link_libraries(
  leetcode_test
  gtest_main
  tree
  linklist
)

include(GoogleTest)
gtest_discover_tests(leetcode_test)
