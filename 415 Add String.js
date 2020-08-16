//Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.
// example
// "1"+"9"="10"

// 直接循环相加即可
// 循环结束后不要忘了处理进位

var addStrings = function(num1, num2) {
	let maxLength = Math.max(num1.length, num2.length);
	let addOne = false;
	let sum = '';
	for (let i = 0; i < maxLength; i++) {
		let aIndex = num1.length - 1 - i;
		let bIndex = num2.length - 1 - i;
		let a = 0;
		let b = 0;
		if (aIndex >= 0) {
			a = parseInt(num1[aIndex], 10);
		}
		if (bIndex >= 0) {
			b = parseInt(num2[bIndex], 10);
		}
		let c = a + b;
		if (addOne === true) {
			c += 1;
			addOne = false;
		}
		if (c >= 10) {
			addOne = true;
			sum += (c % 10).toString();
		} else {
			addOne = false;
			sum += c.toString();
		}
	}
	// 循环结束后处理遗留的进位
	if (addOne === true) {
		sum += '1';
	}
	return sum.split('').reverse().join('');
};
