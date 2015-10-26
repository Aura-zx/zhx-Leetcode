#ifndef REMOVE_NTH_NODE_FROM_END_OF_LIST_H
#define REMOVE_NTH_NODE_FROM_END_OF_LIST_H

#include <stdlib.h>
class Solution_19
{
public:
	struct ListNode
	{
		int val;
		ListNode *next;
		ListNode(int x) :val(x), next(NULL){}
	};

	ListNode* removeNthElementFromEnd(ListNode *head, int n)
	{
		ListNode* dummy = new ListNode(0);
		dummy->next = head;
		ListNode *pre = dummy;
		ListNode *cur = dummy->next;
		ListNode *end = dummy->next;
		while (n > 0)
		{
			end = end->next;
			n--;
		}
		if (end == NULL)
			return cur->next;

		while (end != NULL)
		{
			end = end->next;
			pre = pre->next;
			cur = cur->next;
		}

		ListNode *tmp = cur->next;
		pre->next = tmp;
		cur = tmp;

		return dummy->next;
	}
private:

};
#endif // !REMOVE_NTH_NODE_FROM_END_OF_LIST_H
