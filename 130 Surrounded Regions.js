// Given a 2D board containing 'X' and 'O' (the letter O), capture all regions surrounded by 'X'.

// A region is captured by flipping all 'O's into 'X's in that surrounded region.

// Example:

// X X X X
// X O O X
// X X O X
// X O X X
// After running your function, the board should be:

// X X X X
// X X X X
// X X X X
// X O X X

const dfs = (board, x, y) => {
	if (x < 0 || x >= board.length || y < 0 || y >= board[0].length) {
		return;
	}
	if (board[x][y] === 'O') {
		// 标记已访问的‘O’
		board[x][y] = '@';
		dfs(board, x + 1, y);
		dfs(board, x - 1, y);
		dfs(board, x, y + 1);
		dfs(board, x, y - 1);
	}
};

var solve = function(board) {
	if (board.length === 0) {
		return;
	}
	const m = board.length;
	const n = board[0].length;

	for (let i = 0; i < m; i++) {
		for (let j = 0; j < n; j++) {
			if (i === 0 || i === m - 1 || j === 0 || j === n - 1) {
				// 从边界开始深搜
				dfs(board, i, j);
			}
		}
	}

	// 此时和边界相连的‘O’都成为了‘@’
	for (let i = 0; i < m; i++) {
		for (let j = 0; j < n; j++) {
			if (board[i][j] === '@') {
				board[i][j] = 'O';
			} else if (board[i][j] === 'O') {
				board[i][j] = 'X';
			}
		}
	}
};
