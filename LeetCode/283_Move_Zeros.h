#ifndef Move_Zeros_H
#define	Move_Zeros_H

#include <vector>
#include <algorithm>

class Solution_283 {
public:
	void moveZeroes(std::vector<int>& nums) {
		if (nums.empty( ))
			return;
		
		// check non-zero number and put them from 0 to cur_pos
		int cur_pos = 0;
		for (size_t i = 0; i < nums.size( ); i++)
		{
			if (nums[i] != 0)
			{
				nums[cur_pos] = nums[i];
				cur_pos++;
			}
		}
		// put 0 in the rest position
		for (size_t i = cur_pos; i < nums.size( ); i++)
			nums[i] = 0;
	}
};
#endif // !Move_Zeros
