#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void recurseParenthesis(vector<string>& result, string str, int left, int right);
    vector<string> generateParenthesis(int n);
};