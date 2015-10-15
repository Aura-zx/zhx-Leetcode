#ifndef REMOVE_DUPLICATES_FROM_SORTED_LIST_H
#define REMOVE_DUPLICATES_FROM_SORTED_LIST_H

#include "stdlib.h"

class Solution_83
{
public:
	struct ListNode
	{
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL){}
	};

	ListNode *deleteDuplicates(ListNode* head)
	{
		if (!head)
			return head;

		ListNode *cur = head;

		while (cur->next)
		{
			if (cur->val == cur->next->val)
				cur->next = cur->next->next;
			else
				cur = cur->next;
		}

		return head;
	}
};
#endif // !REMOVE_DUPLICATES_FROM_SORTED_LIST_H
