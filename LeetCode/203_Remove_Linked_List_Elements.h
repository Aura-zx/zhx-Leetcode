#ifndef REMOVE_LINKED_LIST_ELEMENTS_H
#define	REMOVE_LINKED_LIST_ELEMENTS_H

#include <stdlib.h>
class Solution_203
{
public:
	struct ListNode
	{
		int val;
		ListNode *next;
		ListNode(int x) :val(x), next(NULL){}
	};

	ListNode* removeElements(ListNode* head, int val)
	{
		ListNode *dummy = new ListNode(0);
		dummy->next = head;
		ListNode *pre = dummy;
		ListNode *cur = dummy->next;

		while (cur != NULL)
		{
			if (cur->val == val)
			{
				ListNode* tmp = cur->next;
				pre->next = tmp;
				cur = tmp;
			}
			else
			{
				pre = pre->next;
				cur = cur->next;
			}
		}

		return dummy->next;
	}
};

#endif // !REMOVE_LINKED_LIST_ELEMENTS_H
