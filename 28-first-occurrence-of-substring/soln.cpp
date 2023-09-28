#include "soln.hpp"

int Solution::strStr(string haystack, string needle)
{
	int index = haystack.find(needle);
	if (index != std::string::npos)
	{
		return index;
	}
	else
	{
		return -1;
	}
}

bool Solution::test(string haystack, string needle, int answer)	{
	return strStr(haystack, needle) == answer;
}