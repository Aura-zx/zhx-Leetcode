#ifndef SUM_ROOT_TO_LEAF_NUMBERS_H
#define SUM_ROOT_TO_LEAF_NUMBERS_H

#include "basic_struct.h"


class Solution_129
{
public:
	void travel(TreeNode* root, int& sum, int path)
	{
		if (root == NULL)
			return;

		path = path * 10 + root->val;
		if (root->left == NULL && root->right == NULL)
		{
			sum += path;
			return;
		}

		travel(root->left, sum, path);
		travel(root->right, sum, path);
	}

	int sumNumbers(TreeNode* root)
	{
		int sum = 0;
		int path = 0;
		travel(root, sum, path);

		return sum;
	}
};
#endif // !SUM_ROOT_TO_LEAF_NUMBERS_H
