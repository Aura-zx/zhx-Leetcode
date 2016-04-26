#ifndef BINARY_TREE_RIGHT_SIDE_VIEW_H
#define BIANRY_TREE_RIGHT_SIDE_VIEW_H

#include "basic_struct.h"

#include <algorithm>
#include <vector>
class Solution_199
{
public:
	int height(TreeNode* root)
	{
		if (!root)
			return 0;

		int l = height(root->left);
		int r = height(root->right);

		return std::max(l, r) + 1;
	}

	void levelOrderTraversal(TreeNode* root, int level, std::vector<int>& ret)
	{
		if (!root)
			return;

		if (level == 1)
			ret.push_back(root->val);
		else if (level > 1)
		{
			levelOrderTraversal(root->left, level - 1, ret);
			levelOrderTraversal(root->right, level - 1, ret);
		}
	}

	std::vector<int> rightSideView(TreeNode* root)
	{
		int h = height(root);

		std::vector<int> ret;
		for (int i = 1; i <= h; i++)
		{
			std::vector<int> tmp;
			levelOrderTraversal(root, i, tmp);
			ret.push_back(tmp[tmp.size()-1]);
		}
		
		return ret;
	}
};
#endif // !BINARY_TREE_RIGHT_SIDE_VIEW_H
