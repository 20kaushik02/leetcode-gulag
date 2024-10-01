#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	static bool DEBUG;

	template <typename... Args>
	void dbg(Args &&...args)
	{
		if (DEBUG)
		{
			const char *sep = " ";
			const char *label = "[DEBUG]";
			cout << label;
			(((cout << sep << args), sep = sep), ...);
			cout << endl;
		}
	}
	bool canArrange(vector<int> &arr, int k);
	bool test(vector<int> &arr, int k, bool answer);
};