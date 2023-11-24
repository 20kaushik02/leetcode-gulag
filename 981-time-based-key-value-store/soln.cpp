#include <bits/stdc++.h>
using namespace std;
class TimeMap
{
public:
	unordered_map<string, vector<pair<int, string>>> timemap;
	TimeMap()
	{
	}

	void set(string key, string value, int timestamp)
	{
		timemap[key].push_back({timestamp, value});
	}

	string get(string key, int timestamp)
	{
		if (timemap.find(key) == timemap.end())
		{
			return "";
		}
		else if (timemap[key].size() == 1)
		{
			return timemap[key][0].first <= timestamp ? timemap[key][0].second : "";
		}
		// binary search
		int low = 0, high = timemap[key].size(), mid;
		while (low < high)
		{
			mid = low + (high - low) / 2;
			if (timemap[key][mid].first <= timestamp)
			{
				low = mid + 1;
			}
			else
			{
				high = mid;
			}
		}
		// Now, low points to the element that succeeds the given timestamp
		// so we want the one before it
		return low > 0 && low <= timemap[key].size() ? timemap[key][low - 1].second : "";
	}
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */