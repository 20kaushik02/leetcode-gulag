#include "soln.hpp"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int x = 69, answer = 8;
	Solution soln;
	cout << "Square root correct? " << soln.test(x, answer) << endl;
	return 0;
}