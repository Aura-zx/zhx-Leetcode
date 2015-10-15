#ifndef SAME_TREE_H
#define SAME_TREE_H
#include"stdlib.h"

class Solution_100
{
public:
	struct TreeNode
	{
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x), left(NULL), right(NULL){}
	};

	bool isSameTree(TreeNode *p, TreeNode *q)
	{
		// root is empty
		if (p && q)
			return true;
		if (p && !q)
			return false;
		if (!p && q)
			return false;
		if (p->val != q->val)
			return false;
		
		bool left = isSameTree(p->left, q->left);
		bool right = isSameTree(p->right, q->right);

		return left & right;
	}

};

#endif // !SAME_TREE_H
