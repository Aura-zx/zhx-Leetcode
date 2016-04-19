#ifndef LINKED_LIST_CYCLE_H
#define LINKED_LIST_CYCLE_H

#include "basic_struct.h"

class Solution_142
{
	ListNode *detectCycle(ListNode* head)
	{
		ListNode* first = head;
		ListNode* second = head;

		while (first != NULL && second != NULL)
		{
			first = first->next;
			second = second->next;
			if (second != NULL)
				second = second->next;
			if (first == second)
				break;
		}

		if (second == NULL)
			return NULL;

		first = head;
		while (first != second)
		{
			first = first->next;
			second = second->next;
		}

		return second;
	}
};
#endif // !LINKED_LIST_CYCLE_H
