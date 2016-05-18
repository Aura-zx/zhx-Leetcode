#ifndef KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H
#define KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H

#include <vector>

class Solution_215
{
private:
	void swap(std::vector<int>& nums, int i, int j)
	{
		int temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}

	int QuickSelect(std::vector<int>& nums, int k, int start, int end)
	{
		int pivot = nums[end];

		int left = start;
		int right = end;

		while (true) {

			while (nums[left] < pivot && left < right) {
				left++;
			}

			while (nums[right] >= pivot && right > left) {
				right--;
			}

			if (left == right) {
				break;
			}

			swap(nums, left, right);
		}

		swap(nums, left, end);

		if (k == left + 1) {
			return pivot;
		}
		else if (k < left + 1) {
			return QuickSelect(nums, k, start, left - 1);
		}
		else {
			return QuickSelect(nums, k, left + 1, end);
		}
	}

public:
	int findkthLargest(std::vector<int>& nums, int k)
	{
		return QuickSelect(nums, nums.size( ) - k+1, 0, nums.size( ) - 1);
	}
};
#endif // !Kth_LARGEST_ELEMENT_IN_AN_ARRAY_H
