#ifndef PATH_SUM_H
#define PATH_SUM_H

#include <iostream>

class Solution_112
{
public:
	struct TreeNode
	{
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x), left(NULL), right(NULL) { };
	};

	bool hasPathSum(TreeNode *root, int sum)
	{
		if (root == NULL)				// empty tree
			return false;

		// judge the path
		if (root->val == sum && (root->left == NULL && root->right == NULL))
			return true;
		
		// return (left subtree || right subtree)
		return hasPathSum(root->left, sum - (root->val)) || hasPathSum(root->right, sum - (root->val));
	}
};
#endif // !PATH_SUM_H
