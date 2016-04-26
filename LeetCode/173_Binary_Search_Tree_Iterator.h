#ifndef BINARY_SEARCH_TREE_ITERATOR_H
#define BINARY_SEARCH_TREE_ITERATOR_H

#include "basic_struct.h"
#include <stack>
class BSTIterator
{
private:
	std::stack<TreeNode*> data;

public:
	BSTIterator(TreeNode* root)
	{
		while (root)
		{
			data.push(root);
			root = root->left;
		}
	}

	bool hasNext( )
	{
		return !data.empty( );
	}

	int next( )
	{
		auto t = data.top( );
		int val = t->val;
		data.pop( );

		t = t->right;
		while (t)
		{
			data.push(t);
			t = t->left;
		}

		return val;
	}
};
#endif // !BINARY_SEARCH_TREE_ITERATOR_H
