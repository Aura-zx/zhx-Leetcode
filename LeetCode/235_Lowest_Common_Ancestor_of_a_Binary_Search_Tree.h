#ifndef LCA_BINARY_SEARCH_TREE_H
#define LCA_BINARY_SEARCH_TREE_H

#include "stdafx.h"

class Solution_235
{
public:
	struct TreeNode
	{
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) :val(x), left(NULL), right(NULL) {}
	};

	TreeNode *lowestCommonAncestor(TreeNode* root, TreeNode *p, TreeNode *q)
	{
		if (!root)
			return NULL;

		if (p->val > root->val && q->val > root->val)
			return lowestCommonAncestor(root->right, p, q);
		else if (p->val < root->val && q->val < root->val)
			return lowestCommonAncestor(root->left, p, q);
		else
			return root;
	}
};
#endif // !LCA_BINARY_SEARCH_TREE_H
