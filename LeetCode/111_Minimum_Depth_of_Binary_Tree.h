#ifndef MINIMUM_DEPTH_OF_BINARY_TREE_H
#define	MINIMUM_DEPTH_OF_BINARY_TREE_H

#include <stdlib.h>
#include <algorithm>
class Solution_111
{
public:
	struct TreeNode
	{
		int val;
		TreeNode* left;
		TreeNode* right;
		TreeNode(int x) :val(x), left(NULL), right(NULL){}
	};

	int minDepth(TreeNode* root)
	{
		if (!root)
			return 0;

		int left = minDepth(root->left);
		int right = minDepth(root->right);
		
		if (left != 0 && right != 0)
			return 1+std::min(left, right);
		else if (left == 0 && right == 0)
			return 1;
		else
			return 1+std::max(left, right);
	}
};


#endif // !MINIMUM_DEPTH_OF_BINARY_TREE_H
