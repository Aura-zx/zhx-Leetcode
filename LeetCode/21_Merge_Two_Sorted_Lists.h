#ifndef MERGE_TWO_SORTED_LISTS_H
#define	MERGE_TWO_SORTED_LISTS_H

#include <stdlib.h>
class Solution_21
{
public:
	struct ListNode
	{
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL){}
	};

	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
	{
		ListNode* helper = new ListNode(0);
		ListNode* pre = helper;
		helper->next = l1;

		while (l1 && l2)
		{
			if (l1->val > l2->val)
			{
				ListNode* next = l2->next;
				l2->next = pre->next;
				pre->next = l2;
				l2 = next;
			}
			else
				l1 = l1->next;

			pre = pre->next;		// current pre->val is small than l1 and l2
		}

		if (l2 != NULL)
			pre->next = l2;			// l2 is not at end,but l1 is end,so link l2 is the rest part.

		return helper->next;
	}
};
#endif // !MERGE_TWO_SORTED_LISTS_H
