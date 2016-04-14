#ifndef BINARY_TREE_INORDER_TRAVERSAL_H
#define BINARY_TREE_INORDER_TRAVERSAL_H

#include "basic_struct.h"
#include <stack>
#include <vector>

class Solution_94
{
public:
	void inorder(TreeNode* node, std::vector<int>& ret)
	{
		if (node != NULL)
		{
			inorder(node->left, ret);
			ret.push_back(node->val);
			inorder(node->right, ret);
		}
	}

	std::vector<int> inorderTraversal(TreeNode* root)
	{
		std::vector<int> ret;
		if (root == NULL)
			return ret;
		else
			inorder(root, ret);

		return ret;
	}

	std::vector<int> inorderTraversal2(TreeNode* root)
	{
		std::vector<int> ret;
		std::stack<TreeNode*> s;
		if (root == NULL)
			return ret;
		
		while (root != NULL || !s.empty())
		{
			if (root != NULL)
			{
				s.push(root);
				root = root->left;
			}
			else
			{
				root = s.top( );
				s.pop( );
				ret.push_back(root->val);
				root = root->right;
			}
		}

		return ret;
	}
};
#endif // !BINARY_TREE_INORDER_TRAVERSAL_H
