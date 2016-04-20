#ifndef POPULATION_NEXT_RIGHT_POINTERS_IN_EACH_NODE_H
#define POPULATION_NEXT_RIGHT_POINTERS_IN_EACH_NODE_H

#include "basic_struct.h"
class Solution_116
{
public:
	void connect(TreeLinkNode *root)
	{
		if (root == NULL)
			return;

		TreeLinkNode* lastHead = root;		// 上一层的头
		TreeLinkNode* lastCurrent = NULL;	// 上一层的节点
		TreeLinkNode* curHead = NULL;		// 当前的头
		TreeLinkNode* cur = NULL;			// 当前的节点

		// lastCurrent一层层的遍历整个树
		while (lastHead != NULL)
		{
			lastCurrent = lastHead;

			while (lastCurrent != NULL)
			{
				if (curHead == NULL)
				{
					curHead = lastCurrent->left;
					cur = lastCurrent->left;
				}
				else
				{
					cur->next = lastCurrent->left;
					cur = cur->next;
				}

				if (curHead != NULL)
				{
					cur->next = lastCurrent->right;
					cur = cur->next;
				}

				lastCurrent = lastCurrent->next;
			}


			lastHead = curHead;
			curHead = NULL;
		}
	}
};
#endif // !POPULATION_NEXT_RIGHT_POINTERS_IN_EACH_NODE_H
