#ifndef REVERSE_LINKED_LIST_H
#define REVERSE_LINKED_LIST_H

#include <iostream>
using namespace std;

class Solution_206
{
public:
	struct ListNode
	{
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL){};
	};
	ListNode* reverseList(ListNode* head)
	{
		ListNode *pre = NULL;
		while (head != NULL)
		{
			ListNode *tmp = head->next;
			head->next = pre;
			pre = head;
			head = tmp;
		}
		return pre;
	}
};

#endif // !REVERSE_LINKED_LIST_H