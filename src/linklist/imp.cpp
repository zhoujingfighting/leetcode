#include <linklist/imp.h>
#include <linklist/list-node.h>

ListNode* rotateLinkList(ListNode *head) {
  if(!head || !head->next)
    return head;
  ListNode* cur = head;
  ListNode* tmp = head;
  while(head->next){
    cur = head;
    head = head->next;
  }
  cur->next = nullptr;
  head->next = rotateLinkList(tmp);
  return head;
}
