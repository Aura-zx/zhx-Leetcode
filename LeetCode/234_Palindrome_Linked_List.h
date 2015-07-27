#ifndef PALINDROME_LINKED_LIST_H
#define PALINDROME_LINKED_LIST_H
#include "stdafx.h"

class Solution_234
{
public:
	struct ListNode
	{
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL){}
	};

	bool isPalindrome(ListNode *head)
	{
		if (!head)
			return true;

		// get mid Node
		ListNode *slow = head;
		ListNode *fast = head;
		while (fast->next != NULL && fast->next->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;
		}

		// reverse last half list
		ListNode *mid = slow->next;
		ListNode *tmp;
		ListNode *pre = NULL;
		while (mid != NULL)
		{
			tmp = mid->next;
			mid->next = pre;
			pre = mid;
			mid = tmp;
		}

		// compare with reversed list and first half list
		while (head != NULL && pre != NULL)
		{
			if (head->val == pre->val)
			{
				head = head->next;
				pre = pre->next;
			}
			else
				return false;
		}
		return true;
	}
};

#endif // !PALINDROME_LINKED_LIST_H
