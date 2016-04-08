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
			twos |= ones & nums[i];				// &   操作得到ones和当前数字均为1的位数，结果中的1已经表示出现了两次，
												// |   操作得到首次出现的1
			ones ^= nums[i];					// XOR 操作得到首次出现的1，并且将之前的1置0
			threes = ones & twos;               // &   操作得到ones和twos中都出现的1
			
			ones &= ~threes;                    // ~   操作将出现三次的1置0
			twos &= ~threes;					// &   操作将出现三次的1在ones和twos中置0
		}

		return ones;
	}
};
#endif // !SINGLE_NUMBER_II_H
