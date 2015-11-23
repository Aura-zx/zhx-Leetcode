#ifndef COMPARE_VERSION_NUMBERS_H
#define COMPARE_VERSION_NUMBERS_H

#include <string>
#include <vector>
class Solution_165
{
public:

	int compareVersion(string version1, string version2) 
	{
		vector<int> result1 = getInt(version1);
		vector<int> result2 = getInt(version2);
		int len1 = result1.size( );
		int len2 = result2.size( );
		if (len2<len1) return -1 * compareVersion(version2, version1);
		int i = 0;
		while (i<len1 && result1[i] == result2[i]) i++;

		if (i == len1)
		{    //str1��str2ǰlen1λ�����,�򿴿�str2�����len2-len1λ�Ƿ�Ϊ0�����ж����ǵĴ�С
			int j = len2 - 1;
			while (j >= len1)
			{
				if (result2[j--] != 0) return  -1;
			}
			return 0;
		}
		else
		{       //str1��str2ǰlen1λ�������,ֱ���жϵ�iλ
			if (result1[i]<result2[i]) return -1;
			else return 1;
		}
	}
	//��version�ַ�����'.'��ɶ��,ת��Ϊ���ͷ�������
	vector<int> getInt(string version)
	{
		vector<int> result;
		int len = version.size( );
		int pre = 0;
		for (int i = 0; i<len; i++)
		{
			if (version[i] == '.')
			{
				string str(version.begin( ) + pre, version.begin( ) + i);  
				result.push_back(stoi(str));
				pre = i + 1;
			}
		}
		string str(version.begin( ) + pre, version.end( ));
		result.push_back(stoi(str));
		return result;
	}
};

#endif // !COMPARE_VERSION_NUMBERS_H
