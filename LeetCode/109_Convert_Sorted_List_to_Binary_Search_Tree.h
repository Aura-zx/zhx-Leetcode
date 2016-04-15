#ifndef CONVERT_SORTED_LIST_TO_BINARY_SEARCH_TREE_H
#define CONVERT_SORTED_LIST_TO_BINARY_SEARCH_TREE_H

#include "basic_struct.h"

class Solution_109
{
public:
	TreeNode* buildTree(ListNode* node, int count)
	{
		if (count <= 0)
			return NULL;
		int rootindex = count / 2;
		ListNode* rootnode = node;
		for (int i = 0; i < rootindex; i++)
		{
			rootnode = rootnode->next;
		}
		TreeNode* root = new TreeNode(rootnode->val);
		root->left = buildTree(node, rootindex);
		root->right = buildTree(rootnode->next, count - rootindex - 1);

		return root;
	}

	TreeNode* buildTree2(ListNode** head, int count)
	{
		if (count <= 0)
			return NULL;

		TreeNode* left = buildTree2(head, count / 2);

		TreeNode* root = new TreeNode((*head)->val);
		root->left = left;

		*head = (*head)->next;
		root->right = buildTree2(head, count - count / 2 - 1);

		return root;
	}

	TreeNode* sortedListToBST(ListNode* head)
	{
		int count = 0;
		ListNode* node = head;
		while (node != NULL)
		{
			++count;
			node = node->next;
		}
		return buildTree(head, count);
	}
};
#endif // !CONVERT_SORTED_LIST_TO_BINARY_TREE_H
