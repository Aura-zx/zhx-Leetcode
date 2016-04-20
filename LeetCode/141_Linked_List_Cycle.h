#ifndef LINKED_LIST_CYCLE_H
#define LINKED_LIST_CYCLE_H

#include "basic_struct.h"

class Solution_141
{
public:
	bool hasCycle(ListNode *head)
	{
		if (!head)
			return false;

		ListNode* slow = head;
		ListNode* fast = head;
		while (fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
				return true;
		}

		return false;
	}
};
#endif // !LINKED_LIST_CYCLE_H
