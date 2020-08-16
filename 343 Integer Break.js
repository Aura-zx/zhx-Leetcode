// Given a positive integer n, break it into the sum of at least two positive integers
// and maximize the product of those integers. Return the maximum product you can get.

// Input: 10
// Output: 36
// Explanation: 10 = 3 + 3 + 4, 3 × 3 × 4 = 36.

// 写出了1-10的拆分情况，可以发现规律基本是：找出最多的3相乘就是最大的乘积

var integerBreak = function(n) {
	const splits = [];
	if (n <= 3) {
		return n - 1;
	}
	if (n === 4) {
		return 4;
	}
	while (n > 4) {
		n -= 3;
		splits.push(3);
	}
	splits.push(n);
	return splits.reduce((prev, cur) => {
		return prev * cur;
	}, 1);
};

// https://github.com/Aura-zx/LeetCodeDoc/blob/master/343%20Integer%20Break.md
