#include "soln.hpp"

string Solution::longestPalindrome(string s)
{
	int n = s.size();

	// base cases
	if (n == 0)
		return "";
	if (n == 1)
		return s;

	// DP memorization table indices are substring start-end pairs
	vector<vector<bool>> dp(n, vector<bool>(n, false));

	// single length strings/characters are palindromes
	for (int i = 0; i < n; i++)
	{
		dp[i][i] = true;
	}

	// start from first character
	string ans = s.substr(0, 1);

	// start from last, decrease
	for (int start = n - 1; start >= 0; start--)
	{
		// for each, end at last, increase
		// so we go through the string's substrings from the end
		for (int end = start + 1; end < n; end++)
		{
			if (s[start] == s[end])
			{
				// either two characters, or extension of existing palindrome
				if (end - start == 1 || dp[start + 1][end - 1])
				{
					// mark as palindrome
					dp[start][end] = true;
					// check if larger
					if (ans.size() < end - start + 1)
					{
						ans = s.substr(start, end - start + 1);
					}
				}
			}
		}
	}
	return ans;
}

bool Solution::test(string s, string answer)
{
	return longestPalindrome(s) == answer;
}
