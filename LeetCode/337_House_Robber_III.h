#ifndef HOUSE_ROBBER_III_H
#define HOUSE_ROBBER_III_H

#include <algorithm>


#include "basic_struct.h"

class Solution_337
{
public:
	std::pair<int, int> dfs(TreeNode* root)
	{
		// rob_root = max(rob_L + rob_R, no_rob_L + no_nob_R + root.val)
		// no_rob_root = rob_L + rob_R
		std::pair<int, int> dp = std::make_pair(0, 0);
		if (root)
		{
			std::pair<int, int> dp_l = dfs(root->left);
			std::pair<int, int> dp_r = dfs(root->right);
			dp.second = dp_l.first + dp_r.first;
			dp.first = std::max(dp.second, dp_l.second + dp_r.second + root->val);
		}

		return dp;
	}

	int rob(TreeNode* root)
	{
		return dfs(root).first;
	}
};
#endif // !HOUSE_ROBBER_III_H
