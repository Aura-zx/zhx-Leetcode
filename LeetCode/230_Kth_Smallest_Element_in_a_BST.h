#ifndef KTH_SMALL_ELEMENT_IN_A_BST_H
#define KTH_SMALL_ELEMENT_IN_A_BST_H

#include "basic_struct.h"

#include <stack>
class Solution_230
{
public:
	int KthSmallest(TreeNode* root, int k)
	{
		std::stack<TreeNode*> s;
		TreeNode* node = root;
		int ret = 0;

		while (node != NULL || !s.empty( ))
		{
			if (node != NULL)
			{
				s.push(node);
				node = node->left;
			}
			else
			{
				node = s.top( );
				s.pop( );
				if (--k == 0)
				{
					ret = node->val;
					break;
				}
				node = node->right;
			}
		}
		return ret;
	}
};
#endif // !KTH_SMALL_ELEMENT_IN_A_BST_H
