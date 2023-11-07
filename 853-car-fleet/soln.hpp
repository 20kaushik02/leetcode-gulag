#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	struct Car
	{
		int start_pos;
		double car_speed;
		Car() : start_pos(0), car_speed(0) {}
		Car(int pos, double s) : start_pos(pos), car_speed(s) {}
	};
	int carFleet(int target, vector<int> &position, vector<int> &speed);
	bool test(int target, vector<int> &position, vector<int> &speed, int answer);
};