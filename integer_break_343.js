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
