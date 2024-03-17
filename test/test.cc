#include <linklist/imp.h>
#include <linklist/list-node.h>
#include <stack/stack.h>
#include <tree/tree-node.h>
#include <gtest/gtest.h>

TEST(TreeTest, traverseTree) {
  std::vector<int> test = {1, 2, 3, 4, 5, 6};
  std::vector<int> test1 = {1, 2, 3, 4, '$', 5, 6};
  auto d = getTree(test);
  auto d1 = getTree(test1);
  ASSERT_EQ(levelOrderTraverse(d)[0], "1");
  ASSERT_EQ(levelOrderTraverse(d)[1], "23");
  ASSERT_EQ(levelOrderTraverse(d)[2], "456");
  ASSERT_EQ(levelOrderTraverse(d1)[0], "1");
  ASSERT_EQ(levelOrderTraverse(d1)[1], "23");
  ASSERT_EQ(levelOrderTraverse(d1)[2], "456");
  ASSERT_EQ(preOrderTraverse(d), "124536");
  ASSERT_EQ(preOrderTraverse(d, false), "124536");
  ASSERT_EQ(preOrderTraverse(d1), "124356");
  ASSERT_EQ(preOrderTraverse(d1, false), "124356");
}

TEST(ListTest, ListTest) {
  std::vector<int> test = {1, 2, 3, 4, 5, 6};
  ListNode* list = getLinkList(test);
  ASSERT_EQ(traverseLinkList(list), "123456");
  ASSERT_EQ(traverseLinkList(rotateLinkList(list)), "654321");
}

TEST(Stack, Stack) {
  ASSERT_EQ(simplifyPath("/fefef/./fefef/../ff"), "/fefef/ff");
  ASSERT_EQ(simplifyPath("/fefef//fefef/../ff"), "/fefef/ff");
  ASSERT_EQ(simplifyPath("/fefef/"), "/fefef");
  ASSERT_EQ(simplifyPath("/home//foo/"), "/home/foo");
  ASSERT_EQ(simplifyPath("/../"), "/");
  ASSERT_EQ(isValidParesis("{{}}"), true);
  ASSERT_EQ(isValidParesis("())"), false);
  ASSERT_EQ(isValidParesis(""), true);
}
