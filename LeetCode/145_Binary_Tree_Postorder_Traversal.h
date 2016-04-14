#ifndef BINARY_TREE_POSTORDER_TRAVERSAL_H
#define BINARY_TREE_POSTORDER_TRAVERSAL_H

#include "basic_struct.h"
#include <stack>
#include <vector>

class Solution_145
{
public:
	void postorder(TreeNode* node, std::vector<int>& ret)
	{
		if (node == NULL)
			return;
		else
		{
			postorder(node->left, ret);
			postorder(node->right, ret);
			ret.push_back(node->val);
		} 
	}

	std::vector<int> postorderTraversal(TreeNode* root)
	{
		std::vector<int> ret;
		if (root == NULL)
			return ret;
		else
			postorder(root, ret);

		return ret;
	}

	std::vector<int> postorderTraversal2(TreeNode* root)
	{
		std::vector<int> ret;
		std::stack<TreeNode*> s;
		TreeNode* peekNode = NULL;
		TreeNode* lastNodeVisited = NULL;
		if (root == NULL)
			return ret;

		while (root != NULL || !s.empty( ))
		{
			if (root != NULL)
			{
				s.push(root);
				root = root->left;
			}
			else
			{
				peekNode = s.top( );
				if (peekNode->right != NULL && lastNodeVisited != peekNode->right)
					root = peekNode->right;
				else
				{
					ret.push_back(peekNode->val);
					lastNodeVisited = s.top( );
					s.pop( );
				}
			}
		}

		return ret;
	}
};
#endif // !BIANRY_TREE_POSTORDER_TRAVERSAL_H
