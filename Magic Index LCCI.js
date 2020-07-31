// A magic index in an array A[0...n-1] is defined to be an index such that A[i] = i.
// Given a sorted array of integers, write a method to find a magic index,
// if one exists, in array A. If not, return -1.
// If there are more than one magic index, return the smallest one.

// Example1:

//  Input: nums = [0, 2, 3, 4, 5]
//  Output: 0

// 1 <= nums.length <= 1000000

var findMagicIndex = function(nums) {
	for (let i = 0; i < nums.length; i++) {
		if (i === nums[i]) {
			return i;
		}
	}
	return -1;
};

// 试试遍历会不会超时，结果就过了
