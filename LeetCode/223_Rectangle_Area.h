#ifndef RECTANGLE_AREA_H
#define RECTANGLE_AREA_H

#include "stdafx.h"
#include <vector>
#include <algorithm>

class Solution_223
{
public:
	int computeArea(int A, int B, int C, int D, int E, int F, int G, int H)
	{
		int area = (D - B)*(C - A) + (H - F)*(G - E);

		if (E >= C || A >= G || F >= D || B >= H)
			return area;

		std::vector<int> x = { A, C, E, G };
		std::vector<int> y = { B, D, F, H };

		std::sort(x.begin( ), x.end( ));
		std::sort(y.begin( ), y.end( ));

		int length = abs(x[1] - x[2]);
		int height = abs(y[1] - y[2]);

		return area-length*height;
	}
};
#endif // !RECTANGLE_AREA_H
