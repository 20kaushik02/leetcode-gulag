#include "soln.hpp"

bool Solution::isPalindrome(string s)
{
	int n = s.length();
	if (n < 2)
		return true;
	for (int i = 0; i < n; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] < 'a' || s[i] > 'z') &&
			(s[i] < '0' || s[i] > '9'))
		{
			s.erase(s.begin() + i);
			i--;
			n--;
		}
	}
	n = s.length();
	for (int i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		if (s[i] != s[n - i - 1])
			return false;
	}
	return true;
}

bool Solution::test(string s, bool answer)
{
	return isPalindrome(s) == answer;
}