#ifndef 206_REVERSE_LINKED_LIST_H
#define	206_REVERSE_LINKED_LIST_H

#include <iostream>
using namespace std;

class Solution_206
{
public:
	struct ListNode
	{
		int val;
		ListNode *next;
		LsitNode(int x): val(x), next(NULL){};
	};
	ListNode* reverseList(ListNode* head)
	{
		if (head->next == NULL)		// check if head is empty
			return head;
		else 
			reverseList(head->next);
	}
};

#endif // !206_REVERSE_LINKED_LIST_H
