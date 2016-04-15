#ifndef CONVERT_SORTED_ARRAY_SEARCH_TREE_H
#define CONVERT_SORTED_ARRAY_SEARCH_TREE_H

#include "basic_struct.h"
#include <vector>
class Solution_108
{
public:
	TreeNode* buildTree(std::vector<int>& nums, int start, int end)
	{
		if (start > end)
			return NULL;

		int mid = start + (end - start) 
		TreeNode* root = new TreeNode(nums[mid]);

		root->left = buildTree(nums, start, mid - 1);

		root->right = buildTree(nums, mid + 1, end);

		return root;
	}

	TreeNode* sortedArrayToBST(std::vector<int>& nums)
	{
		return buildTree(nums, 0, nums.size( ) - 1);
	}
};
#endif // !CONVERT_SORTED_ARRAY_SEARCH_TREE_H
