#ifndef BINARY_TREE_PATH_H
#define	BINARY_TREE_PATH_H

#include <stdlib.h>
#include <string>
#include <vector>
class Solution_257
{
public:
	struct TreeNode
	{
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) :val(x), left(NULL), right(NULL){}
	};

	std::vector<std::string> binaryTreePath(TreeNode* root)
	{
		std::vector<std::string> res;
		if (!root)
			return res;
		
		btdfs(root, std::to_string(root->val), res);

		return res;
	}

	void btdfs(TreeNode* root, std::string out, std::vector<std::string> &res)
	{
		if (!root->left && !root->right)
			res.push_back(out);
		if (root->left)
		{
			btdfs(root->left, out + "->" + std::to_string(root->left->val), res);
		}
		if (root->right)
		{
			btdfs(root->right, out + "->" + std::to_string(root->right->val), res);
		}
	}

};

#endif // !BINARY_TREE_PATH_H
