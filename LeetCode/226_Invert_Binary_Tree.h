#ifndef INVERT_BINARY_TREE_H
#define INVERT_BINARY_TREE_H

#include "stdafx.h"
class Solution_226
{
public:
	struct TreeNode
	{
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) :val(x), left(NULL), right(NULL){}
	};

	TreeNode* invertTree(TreeNode *root)
	{
		if (!root)			// check if tree is empty
			return root;

		invertTree(root->left);
		invertTree(root->right);

		TreeNode *tmp = root->right;
		root->right = root->left;
		root->left = tmp;
		
		return root;
	}
};

#endif // !INVERT_BINARY_TREE_H
