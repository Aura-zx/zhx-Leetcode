#ifndef BINARY_TREE_PREORDER_TRAVERSAL_H
#define BINARY_TREE_PREORDER_TRAVERSAL_H

#include "basic_struct.h"

#include <stack>
#include <vector>
class Solution_144
{
public:
	void preorder(TreeNode* node, std::vector<int>& ret)
	{
		if (!node)
			return;
		ret.push_back(node->val);
		preorder(node->left, ret);
		preorder(node->right, ret);
	}

	std::vector<int> preorderTraversal(TreeNode* root)
	{
		std::vector<int> ret;

		if (!root)
			return ret;
		preorder( root, ret);

		return ret;
	}

	std::vector<int> preorderTraversal2(TreeNode* root)
	{
		std::stack<TreeNode*> s;
		std::vector<int> ret;
		while (!s.empty( ) || root != NULL)
		{
			if (root != NULL)
			{
				ret.push_back(root->val);
				if (root->right != NULL)
					s.push(root->right);
				root = root->left;
			}
			else
			{
				root = s.top( );
				s.pop( );
			}
		}

		return ret;
	}
};
#endif // !BINARY_TREE_PREORDER_TRAVERSAL_H
