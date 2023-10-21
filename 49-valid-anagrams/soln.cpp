#include "soln.hpp"

vector<vector<string>> Solution::groupAnagrams(vector<string> &strs)
{
	unordered_map<string, vector<string>> str_map;
	for (string s : strs)
	{
		string t = s;
		sort(t.begin(), t.end());
		str_map[t].push_back(s);
	}
	vector<vector<string>> anag;
	for (auto it : str_map)
	{
		anag.push_back(it.second);
	}
	return anag;
}
