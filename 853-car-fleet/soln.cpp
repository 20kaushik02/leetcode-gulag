#include "soln.hpp"

int Solution::carFleet(int target, vector<int> &position, vector<int> &speed)
{
	if (position.size() < 2)
		return position.size();
	// int fleets = position.size();
	vector<Car> cars;
	vector<double> slowest_times;
	for (int i = 0; i < position.size(); i++)
	{
		cars.push_back(Car(position[i], speed[i]));
	}
	sort(
		cars.begin(),
		cars.end(),
		[](const Car &lhs, const Car &rhs)
		{
			return lhs.start_pos < rhs.start_pos;
		});
	for (int i = cars.size() - 1; i >= 0; i--)
	{
		slowest_times.push_back((target - cars[i].start_pos) / float(cars[i].car_speed));
		if (slowest_times.size() >= 2 && slowest_times[slowest_times.size() - 1] <= slowest_times[slowest_times.size() - 2])
		{
			slowest_times.pop_back();
		}
	}
	return slowest_times.size();
}

bool Solution::test(int target, vector<int> &position, vector<int> &speed, int answer)
{
	return carFleet(target, position, speed) == answer;
}
