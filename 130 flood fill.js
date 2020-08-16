// An image is represented by a 2-D array of integers,
//each integer representing the pixel value of the image (from 0 to 65535).
// Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill,
// and a pixel value newColor, "flood fill" the image.
// To perform a "flood fill", consider the starting pixel,
// plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel,
// plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel), and so on.
// Replace the color of all of the aforementioned pixels with the newColor.

// 从起始点dfs即可
var floodFill = function(image, sr, sc, newColor) {
	if (image.length === 0) {
		return image;
	}
	const width = image.length;
	const height = image[0].length;
	const targetColor = image[sr][sc];
	const dfs = (image, x, y) => {
		if (x < 0 || x >= width || y < 0 || y >= height || image[x][y] === newColor) {
			return;
		}
		if (image[x][y] === targetColor) {
			image[x][y] = newColor;
			dfs(image, x + 1, y);
			dfs(image, x - 1, y);
			dfs(image, x, y + 1);
			dfs(image, x, y - 1);
		}
	};

	dfs(image, sr, sc);

	return image;
};
