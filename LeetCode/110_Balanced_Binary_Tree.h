#ifndef BALANCED_BINARY_TREE_H
#define BALANCED_BINAYR_TREE_H

#include <stdlib.h>
#include <algorithm>
class Solution_110
{
public:
	struct TreeNode
	{
		int val;
		TreeNode* left;
		TreeNode* right;
		TreeNode(int x) :val(x), left(NULL), right(NULL){}
	};

	bool isBalanced(TreeNode* root)
	{
		if (!root)
			return true;

		// subtree difference more than 1 ,return false
		if (abs(depth(root->left) - depth(root->right)) > 1)
			return false;

		bool left  = isBalanced(root->left);
		bool right = isBalanced(root->right);
		
		return left && right;
	}

	int depth(TreeNode* root)
	{
		if (root == NULL)
			return 0;

		return 1 + std::max(depth(root->left), depth(root->right));
	}
};
#endif // !BALANCED_BINARY_TREE_H
