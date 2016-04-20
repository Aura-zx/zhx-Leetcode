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

		TreeLinkNode* lastHead = root;		// ��һ���ͷ
		TreeLinkNode* lastCurrent = NULL;	// ��һ��Ľڵ�
		TreeLinkNode* curHead = NULL;		// ��ǰ��ͷ
		TreeLinkNode* cur = NULL;			// ��ǰ�Ľڵ�

		// lastCurrentһ���ı���������
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
