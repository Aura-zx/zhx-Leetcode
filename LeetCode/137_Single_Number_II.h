#ifndef SINGLE_NUMBER_II_H
#define SINGLE_NUMBER_II_H

#include <vector>

class Solution
{
	int singleNumber(std::vector<int>& nums)
	{
		int ones   = 0;
		int twos   = 0;
		int threes = 0;

		for (int i = 0; i < nums.size( ); i++)
		{
			twos |= ones & nums[i];				// &   �����õ�ones�͵�ǰ���־�Ϊ1��λ��������е�1�Ѿ���ʾ���������Σ�
												// |   �����õ��״γ��ֵ�1
			ones ^= nums[i];					// XOR �����õ��״γ��ֵ�1�����ҽ�֮ǰ��1��0
			threes = ones & twos;               // &   �����õ�ones��twos�ж����ֵ�1
			
			ones &= ~threes;                    // ~   �������������ε�1��0
			twos &= ~threes;					// &   �������������ε�1��ones��twos����0
		}

		return ones;
	}
};
#endif // !SINGLE_NUMBER_II_H
