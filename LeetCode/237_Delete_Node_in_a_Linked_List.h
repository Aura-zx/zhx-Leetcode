#ifndef DELETE_NODE_IN_A_LINKED_LIST_H
#define	DELETE_NODE_IN_A_LINKED_LIST_H

#include <iostream>

class Solution_237
{
public:
	struct ListNode
	{
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL){};
	};

	void deleteNode(ListNode* node)
	{
		ListNode *tmp = node->next;
		node->val = tmp->val;
		node->next = tmp->next;
	}
};
#endif // !DELETE_NODE_IN_A_LINKED_LIST_H
