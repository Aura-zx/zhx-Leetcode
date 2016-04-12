#ifndef BASIC_STRUCT_H
#define BASIC_STRUCT_H

#include <stdlib.h>

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) :val(x), next(NULL){}
};

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};
#endif // !BISIC_STRUCT_H
