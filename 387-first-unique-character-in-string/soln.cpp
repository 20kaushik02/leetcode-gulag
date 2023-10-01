#include "soln.hpp"

int Solution::firstUniqChar(string s)
{
	map<char, int> counts = map<char, int>();

	// get counts of all unique chars in s
	for (int i = 0; i < s.length(); i++)
	{
		counts[s[i]]++;
	}

	// go through string and get first char with count = 1
	for (int i = 0; i < s.length(); i++)
	{
		if (counts[s[i]] == 1)
		{
			return i;
		}
	}
	return -1;
}

bool Solution::test(string s, int answer)	{
	return firstUniqChar(s) == answer;
}