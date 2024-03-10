#include "linklist/list-node.h"
#include <vector>

std::string traverseLinkList(ListNode *head) {
  std::string result = "";
  while (head) {
    result += std::to_string(head->val);
    head = head->next;
  }
  return std::move(result);
}

ListNode* getLinkList(std::vector<int> &input){
  ListNode* dummy = new ListNode(0);
  ListNode* tmp = dummy;
  for(int i = 0 ; i < input.size() ; i ++) {
    auto newNode = new ListNode(input[i]);
    tmp->next = newNode;
    tmp = tmp->next;
  }
  return std::move(dummy->next);
}
