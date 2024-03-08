#ifndef __TREE_NODE_H__
#define __TREE_NODE_H__

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int val = 0) : val(val), left(nullptr), right(nullptr){};
  TreeNode(int val, TreeNode *left, TreeNode *right)
      : val(val), left(left), right(right){};
  ~TreeNode() {}
};

int add(int, int);

#endif // __TREE_NODE_H__