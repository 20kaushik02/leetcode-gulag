#include "soln.hpp"

int Solution::minEatingSpeed(vector<int> &piles, int h)
{
	if (piles.size() < 2)
	{
		// cout << double(piles[0]/double(h)) << " " << ceil(piles[0]/double(h)) << endl;
		return ceil(piles[0] / double(h));
	}
	long k_lmin = 0;
	int k_max = 1;
	int k_mid, hours_for_k_mid;
	for (int pile : piles)
	{
		k_max = max(k_max, pile);
		k_lmin += pile;
	}
	k_lmin /= h;
	int k_min = k_lmin;
	while (k_min < k_max)
	{
		k_mid = (k_min + k_max) / 2;
		hours_for_k_mid = 0;
		for (int pile : piles)
		{
			// cout << pile << " " << k_mid << endl;
			hours_for_k_mid += ceil(pile / double(k_mid));
		}
		if (hours_for_k_mid > h)
		{
			k_min = k_mid + 1;
		}
		else
		{
			k_max = k_mid;
		}
	}
	return k_min;
}

bool Solution::test(vector<int> &piles, int h, int answer)
{
	return minEatingSpeed(piles, h) == answer;
}