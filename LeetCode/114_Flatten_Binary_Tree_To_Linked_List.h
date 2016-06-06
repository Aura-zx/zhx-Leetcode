#ifndef FLATTEN_BINARY_TREE_TO_LINKED_LIST_H
#define FLATTEN_BINAYR_TREE_TO_LINKED_LIST_H

#include "basic_struct.h"
class Solution_114
{
public:
	void flattenTree(TreeNode* root, TreeNode* &last)
	{
		if (!root)
			return;

		if (last != NULL)
		{
			last->left = NULL;
			last->right = root;
		}
		last = root;
		
		TreeNode *left = root->left;
		TreeNode *right = root->right;

		flattenTree(left, last);
		flattenTree(right, last);
	}

	void flatten(TreeNode* root)
	{
		if (!root)
			return;

		TreeNode* last = NULL;
		flattenTree(root, last);
	}
};
#endif // !FLATTEN_BINARY_TREE_TO_LINKED_LIST_H
