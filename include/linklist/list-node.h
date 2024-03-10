#ifndef __LIST_NODE_H__
#define __LIST_NODE_H__

#include <string>

// Definition for singly-linked list
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int val = 0) : val(val), next(nullptr){};
  ListNode(int val, ListNode *next) : val(val), next(next){};
  ~ListNode() {}
};

// Get traverse result for a single list node
std::string traverseLinkList(ListNode *head);

ListNode* getLinkList(std::vector<int> &);

#endif // __LIST_NODE_H__
