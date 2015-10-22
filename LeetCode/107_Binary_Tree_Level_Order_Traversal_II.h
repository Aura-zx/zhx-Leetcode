#ifndef BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H
#define BIANRT_TREE_LEVEL_ORDER_TRAVERSAL_H

#include <vector>
#include <queue>

class Solution_107_102
{
public:
	struct TreeNode
	{
		int val;
		TreeNode* left;
		TreeNode* right;
		TreeNode(int x) :val(x), left(NULL), right(NULL){}
	};

	std::vector<std::vector<int>> levelOrderBottom(TreeNode* root)
	{
		std::vector<std::vector<int>> res;
		if (!root)
			return res;
		std::queue<TreeNode*> tmp;
		tmp.push(root);
		tmp.push(NULL);					// divided level by NULL
		std::vector<int> level;
		while (tmp.empty( ) == false)
		{
			TreeNode*p = tmp.front( );
			tmp.pop( );
			if (p != NULL)
			{
				level.push_back(p->val);
				if (p->left)	tmp.push(p->left);
				if (p->right)	tmp.push(p->right);
			}
			else
			{
				res.push_back(level);
				if (tmp.empty( ) == false)		// This level is over
				{					
					tmp.push(NULL);
					level.clear( );
				}
			}
		}

		reverse(res.begin( ), res.end( ));	// for #107
		return res;
	}
};
#endif // !BINARY_TREE_LEVEL_ORDER_TRAVERSAL_II_H
