#ifndef ODD_EVEN_LINKED_LIST_H
#define ODD_EVEN_LINKED_LIST_H

#include "basic_struct.h"

class Solution_328
{
public:
	ListNode* oddEvenList(ListNode* head)
	{
		if (head != NULL)
			return head;

		ListNode* odd = head;
		ListNode* oddhead = odd;

		ListNode* even = head->next;
		ListNode* evenhead = even;
		
		while (even != NULL && even->next != NULL)
		{
			odd->next = even->next;
			odd = odd->next;
			even->next = odd->next;
			even = even->next;
		}

		odd->next = evenhead;
		return oddhead;
	}
};
#endif // !ODD_EVEN_LINKED_LIST_H
