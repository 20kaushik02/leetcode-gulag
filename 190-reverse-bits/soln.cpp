#include "soln.hpp"

uint32_t Solution::reverseBits(uint32_t n)
{
	uint32_t result = 0;
	for (int i = 0; i < 32; i++)
	{
		result = result << 1; // increase result size
		result += (n & 1);	  // append last bit
		n = n >> 1;			  // move to next bit
	}
	return result;
}

bool Solution::test(uint32_t n, uint32_t answer)
{
	return reverseBits(n) == answer;
}