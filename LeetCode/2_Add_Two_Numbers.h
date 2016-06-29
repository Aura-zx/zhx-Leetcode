#ifndef ADD_TWO_NUMBERS_H
#define ADD_TWO_NUMBERS_H

#include "basic_struct.h"
class Solution_2
{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
		ListNode* dummy = new ListNode(-1);
		ListNode* p = dummy;

		int carry = 0;
		while (l1 || l2 || carry)
		{
			if (l1 != nullptr)
			{
				carry += l1->val;
				l1 = l1->next;
			}
			if (l2 != nullptr)
			{
				carry += l2->val;
				l2 = l2->next;
			}

			p->next = new ListNode(carry % 10);
			carry /= 10;
			p = p->next;
		}

		return dummy->next;
	}
};
#endif // !ADD_TWO_NUMBERS_H
