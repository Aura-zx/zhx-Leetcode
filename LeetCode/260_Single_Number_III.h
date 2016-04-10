#ifndef SINGLE_NUMBER_III_H
#define SINGLE_NUMBER_III_H

#include<vector>

class Solution_260
{
	std::vector<int> singleNumber(std::vector<int>& nums)
	{
		// �ȵõ����������XOR��ʵ���������������ֵ�XOR
		int xor1 = 0;
		for (int i = 0; i < nums.size( ); i++)
		{
			xor1 = xor1^nums[i];
		}

		// �ҵ���һ����ͬλ��λ��
		int index = 0;
		for (index = 0; index < 32; index++)
		{
			if ((xor1 >> index) & 1 == 1)
				break;
		}

		// �ҳ��Ǹ��ض������е�һ��
		int xor2 = 0;
		for (int i = 0; i < nums.size( ); i++)
		{
			if ((nums[i] >> index) & 1 == 1)
				xor2 = xor2 ^ nums[i];
		}

		std::vector<int> ret = { xor2, xor1 ^ xor2 };
		return ret;
	}
};
#endif // !SINGLE_NUMBER_III_H
