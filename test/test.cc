#include "tree-node.h"
#include <gtest/gtest.h>

TEST(TreeTest, traverseTree) {
  std::vector<int> test = {1, 2, 3, 4, 5, 6};
  std::vector<int> test1 = {1, 2, 3, 4, '$', 5, 6};
  auto d = getTree(test);
  auto d1 = getTree(test1);
  ASSERT_EQ(levelOrderTravase(d)[0], "1");
  ASSERT_EQ(levelOrderTravase(d)[1], "23");
  ASSERT_EQ(levelOrderTravase(d)[2], "456");
  ASSERT_EQ(levelOrderTravase(d1)[0], "1");
  ASSERT_EQ(levelOrderTravase(d1)[1], "23");
  ASSERT_EQ(levelOrderTravase(d1)[2], "456");
  ASSERT_EQ(preOrderTravase(d), "124536");
  ASSERT_EQ(preOrderTravase(d, false), "124536");
  ASSERT_EQ(preOrderTravase(d1), "124356");
  ASSERT_EQ(preOrderTravase(d1, false), "124356");
}