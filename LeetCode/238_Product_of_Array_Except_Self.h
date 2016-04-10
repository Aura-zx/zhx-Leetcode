#ifndef PRODUCT_OF_ARRAY_EXCEPT_SELF_H
#define PRODUCT_OF_ARRAY_EXCEPT_SELF_H

#include <vector>

class Solution_238
{
	std::vector<int> productExceptSelf(std::vector<int>& nums)
	{
		int size = nums.size( );
		std::vector<int> ret(size, 1);

		// �������ҳ�,��һ��д����ע��
		// int left = nums[0];
		for (int i = 1; i < size; i++)
		{
			ret[i] = ret[i - 1] * nums[i - 1];
			// ret[i] *= left;
			// left *= nums[i];
		}

		// ���������
		int right = 1;
		for (int i = size - 1; i >= 0; i--)
		{
			ret[i] *= right;
			right *= nums[i];
		}

		return ret;
	}
};
#endif // !PRODUCT_OF_ARRAY_EXCEPT_SELF_H
