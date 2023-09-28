#include "soln.hpp"
#include <iostream>

int main()	{
	string haystack = "Drink some water, reload your mags, and let's get back out there.";
	string needle = "water";
	Solution soln;
	cout << "Found correctly? " << soln.test(haystack, needle, 11) << endl;
	return 0;
}