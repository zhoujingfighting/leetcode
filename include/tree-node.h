#ifndef __TREE_NODE_H__
#define __TREE_NODE_H__

#include <string>
#include <vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int val = 0) : val(val), left(nullptr), right(nullptr){};
  TreeNode(int val, TreeNode *left, TreeNode *right)
      : val(val), left(left), right(right){};
  ~TreeNode() {}
};

// Building a tree from the given int array
// use '$' for empty nodes
TreeNode *getTree(std::vector<int> &, int start = 0);

// Level order traverse tree
std::vector<std::string> levelOrderTravase(TreeNode *root);

// Preorder traverse tree node
std::string preOrderTravase(TreeNode *root,
                                         bool useRecurse = true);

#endif // __TREE_NODE_H__