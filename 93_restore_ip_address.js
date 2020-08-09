// Input: "25525511135"
// Output: ["255.255.11.135", "255.255.111.35"]

function restoreIPAddress(s) {
	const validIPs = [];
	const ip = [];
	// segIP 当前处理的ip哪一段的值
	// index 字符串的当前index
	const dfs = (s, segIP, index) => {
		// sepIP = 4表示目前处理的ip的4段地址均已得到
		if (segIP === 4) {
			// s已遍历完则记录结果并返回
			if (index === s.length) {
				validIPs.push(ip.join('.'));
				return;
			}
			// s未遍历完不记录结果直接返回
			return;
		}
		// 未获得完整ip但是s已经到达结尾
		if (index === s.length) {
			return;
		}
		// 当前数字为0则segIP段为0
		if (s.charAt(index) === '0') {
			ip[segIP] = 0;
			dfs(s, segIP + 1, index + 1);
		}
		// 正常流程，遍历s的剩余字符
		let addr = 0;
		for (let i = index; i < s.length; i++) {
			addr = addr * 10 + (s.charAt(i) - '0');
			if (addr > 0 && addr <= 255) {
				ip[segIP] = addr;
				dfs(s, segIP + 1, index + 1);
			} else {
				break;
			}
		}
	};

	dfs(s, 0, 0);
	return validIPs;
}
