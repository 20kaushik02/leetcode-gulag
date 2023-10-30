#include "soln.hpp"

vector<int> Solution::dailyTemperatures(vector<int> &temperatures)
{
	// brute force
	// vector<int> answer(temperatures.size());
	// for(int i = 0; i < temperatures.size(); i++)    {
	//     bool warmer_day_found = false;
	//     for(int j = i+1; j < temperatures.size(); j++)  {
	//         if(temperatures[j] > temperatures[i])   {
	//             warmer_day_found = true;
	//             answer[i] = j-i;
	//             break;
	//         }
	//     }
	//     if(!warmer_day_found)
	//         answer[i] = 0;
	// }
	// return answer;

	// stack, neetcode
	vector<int> answer(temperatures.size());
	stack<int> dec_temps;
	for (int i = 0; i < temperatures.size(); i++)
	{
		while (!dec_temps.empty() && temperatures[i] > temperatures[dec_temps.top()])
		{
			answer[dec_temps.top()] = i - dec_temps.top();
			dec_temps.pop();
		}
		dec_temps.push(i);
	}
	while (!dec_temps.empty())
	{
		answer[dec_temps.top()] = 0;
		dec_temps.pop();
	}
	return answer;
}

bool Solution::test(vector<int> &temperatures, vector<int> &answer)
{
	return dailyTemperatures(temperatures) == answer;
}
