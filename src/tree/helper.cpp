#include "tree-node.h"
#include <algorithm>
#include <string>
#include <vector>

TreeNode *getTree(std::vector<int> &input, int start) {
  if (input.empty() || input[start] == '$')
    return nullptr;
  TreeNode *root = new TreeNode(input[start]);
  int i = 2 * start + 1;
  int j = 2 * start + 2;
  if (i > input.size() - 1)
    root->left = nullptr;
  else
    root->left = getTree(input, i);
  if (j > input.size() - 1)
    root->right = nullptr;
  else
    root->right = getTree(input, j);
  return std::move(root);
};

std::vector<std::string> levelOrderTravase(TreeNode *root) {
  std::vector<std::string> result;
  std::vector<TreeNode*> tmp = {root};
  while(!tmp.empty()) {
    std::string level = "";
    std::vector<TreeNode*> tmp1 = {};
    for(auto node : tmp) {
      level += std::to_string(node->val);
      if(node->left)
        tmp1.push_back(node->left);
      if(node->right)
        tmp1.push_back(node->right);
    }       
    tmp = tmp1;     
    result.push_back(level);
  }
  return result;
}