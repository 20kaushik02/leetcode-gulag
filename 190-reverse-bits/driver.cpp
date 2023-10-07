#include "soln.hpp"

int main()
{
	uint32_t n = 43261596;		 // 00000010100101000001111010011100
	uint32_t answer = 964176192; // 00111001011110000010100101000000
	Solution soln;
	cout << "Reversed bits correctly? " << soln.test(n, answer) << endl;
	return 0;
}