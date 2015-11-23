#ifndef STRING_TO_INTEGER_H
#define STRING_TO_INTEGER_H

#include <string>
class Solution_8
{
public:
	int myAtoi(std::string str)
	{
		if (str.length() == 0)
			return 0;

		long long result = 0;
		int sign = 1;
		int i = 0;
		while (str[i] == ' ')
		{
			i++;
		}

		if (str[i] == '+')
			i++;
		else if (str[i] == '-')
		{
			sign = -1;
			i++;
		}

		for (int j = i; j < str.length( ); j++)
		{
			if (str[j] >= '0' && str[j] <= '9')
			{
				result = result * 10 + str[j] - '0';
				if (result > INT_MAX)
					return sign < 0 ? INT_MAX : INT_MIN;
			}
			else
				break;
		}

		result *= sign;
		return (int)result;
	}
};
#endif // !STRING_TO_INTEGER_H
