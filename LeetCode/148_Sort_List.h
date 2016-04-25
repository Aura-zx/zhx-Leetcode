#ifndef SORT_LIST_H
#define SORT_LIST_H

#include "basic_struct.h"
class Solution_148
{
public:
	ListNode* merge(ListNode* list1, ListNode* list2)
	{
		if (list1 == NULL)
			return list2;
		if (list2 == NULL)
			return list1;

		ListNode* head;
		ListNode* tmp;

		if (list1->val < list2->val)
		{
			head = list1;
			list1 = list1->next;
		}
		else
		{
			head = list2;
			list2 = list2->next;
		}

		tmp = head;
		while (list1 != NULL && list2 != NULL)
		{
			if (list1->val < list2->val)
			{
				tmp->next = list1;
				tmp = list1;
				list1 = list1->next;
			}
			else
			{
				tmp->next = list2;
				tmp = list2;
				list2 = list2->next;
			}
		}

		if (list1 != NULL)
			tmp->next = list1;
		if (list2 != NULL)
			tmp->next = list2;

		return head;
	}

	ListNode* sortList(ListNode* head)
	{
		if (!head || !head->next)
			return head;
		ListNode* slow = head;
		ListNode* fast = head;
		while (fast->next != NULL && fast->next->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;
		}

		ListNode* mid = slow->next;
		slow->next = NULL;
		
		ListNode* list1 = sortList(head);
		ListNode* list2 = sortList(mid);

		ListNode* sorted = merge(list1, list2);

		return sorted;
	}
};
#endif // !SORT_LIST_H
