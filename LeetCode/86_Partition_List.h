#ifndef PARTITION_LIST_H
#define PARTITION_LIST_H

#include "basic_struct.h"

class Solution_86
{
public:
	ListNode* partition(ListNode* head, int x)
	{
		ListNode* less = new ListNode(0);
		ListNode* grater = new ListNode(0);
		ListNode* node = head;

		ListNode* tl = less;
		ListNode* tg = grater;
		while (node != NULL)
		{
			if (node->val >= x)
			{
				tg->next = node;
				tg = tg->next;
			}
			
			if (node->val < x)
			{
				tl->next = node;
				tl = tl->next;
			}

			node = node->next;
		}

		tl->next = grater->next;
		tg->next = NULL;
		return less->next;
	}
};
#endif // !PARTITION_LIST_H
