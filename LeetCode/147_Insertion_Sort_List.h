#ifndef INSERTION_SORT_LIST_H
#define INSERTION_SORT_LIST_H

#include "basic_struct.h"

class Solution_147
{
	ListNode* insertionSortList(ListNode* head)
	{
		ListNode* newhead = new ListNode(INT_MIN);
		while (head)
		{
			ListNode* cur = head;
			ListNode* p	  = newhead;
			head = head->next;
			while (p->next && p->next->val < cur->val)
				p = p->next;
			cur->next = p->next;
			p->next = cur;
		}

		head = newhead->next;
		delete newhead;
		return head;
	}
};
#endif // !INSERTION_SORT_LIST_H
