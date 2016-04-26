#ifndef ROTATE_IMAGE_H
#define ROTATE_IMAGE_H

#include <vector>

class Solution_48
{
public:
	void rotate(std::vector<std::vector<int>>& matrix)
	{
		int start = 0;
		int end = matrix.size( ) - 1;

		while (start < end)
		{
			for (int i = start; i < end; i++)
			{
				int offset = i - start;
				int tmp = matrix[start][i];
				matrix[start][i] = matrix[end - offset][start];
				matrix[end - offset][start] = matrix[end][end - offset];
				matrix[end][end - offset] = matrix[start+offset][end];
				matrix[start + offset][end] = tmp;
			}
			start++;
			end--;
		}
	}
};
#endif // !ROTATE_IMAGE_H
