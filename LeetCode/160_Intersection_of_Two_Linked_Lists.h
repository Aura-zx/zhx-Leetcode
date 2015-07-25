#ifndef INTERSECTION_OF_TWO_LINKED_LISTS_H
#define	INTERSECTION_OF_TWO_LINKED_LISTS_H
#include <iostream>

class Solution_160
{
public:
	struct ListNode
	{
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL){}
	};

	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
	{
		if (headA == NULL || headB == NULL)
			return NULL;						// check if there exists empty list

		ListNode *hA = headA;
		ListNode *hB = headB;
		int lengthA = 0;
		int lengthB = 0;

		// find length of two linked list
		while (headA != NULL)
		{
			headA = headA->next;
			lengthA++;
		}

		while (headB != NULL)
		{
			headB = headB->next;
			lengthB++;
		}
		
		// which list is longer , it go |M-N| steps
		int max = lengthA > lengthB ? 1 : 0;
		int diff = abs(lengthA - lengthB);
		if (max == 1)
		{
			while (diff != 0)
			{
				hA = hA->next;
				diff--;
			}
		}
		else
		{
			while (diff != 0)
			{
				hB = hB->next;
				diff--;
			}
		}

		// now they are the same length , compare one by one
		while (hA != NULL && hB != NULL)
		{
			if (hA == hB)
				return hA;
			else
			{
				hA = hA->next;
				hB = hB->next;
			}
		}
		return NULL;
	}
};

#endif // !INTERSECTION_OF_TWO_LINKED_LISTS_H
