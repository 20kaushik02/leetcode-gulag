#include "soln.hpp"

int main()
{
	vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};
	vector<vector<string>> answer;
	answer.push_back(vector<string>{"bat"});
	answer.push_back(vector<string>{"nat", "tan"});
	answer.push_back(vector<string>{"ate", "eat", "tea"});
	Solution soln;
	vector<vector<string>> result = soln.groupAnagrams(strs);
	cout << "Result set: " << endl;
	for (vector<string> strset : result)
	{
		for (string str : strset)
		{
			cout << str << " ";
		}
		cout << endl;
	}
	cout << "Answer set: " << endl;
	for (vector<string> strset : answer)
	{
		for (string str : strset)
		{
			cout << str << " ";
		}
		cout << endl;
	}
	return 0;
}