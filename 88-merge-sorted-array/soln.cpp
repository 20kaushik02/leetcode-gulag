#include "soln.hpp"
#include <vector>

using std::vector;

void Solution::merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
	int arr1_p = 0, arr2_p = 0;
	vector<int> result = vector<int>(m + n);
	for (int i = 0; i < m + n; i++)
	{
		// second array depleted
		if (arr2_p >= n)
		{
			result[i] = nums1[arr1_p++];
		}
		// first array depleted
		else if (arr1_p >= m)
		{
			result[i] = nums2[arr2_p++];
		}
		// nums2 elem greater, take from nums1
		else if (nums2[arr2_p] > nums1[arr1_p])
		{
			result[i] = nums1[arr1_p++];
		}
		// nums1 elem greater, take from nums2
		else if (nums2[arr2_p] <= nums1[arr1_p])
		{
			result[i] = nums2[arr2_p++];
		}
	}
	nums1 = result;
};

bool Solution::test(vector<int> &nums1, int m, vector<int> &nums2, int n, vector<int> &answer)
{
	vector<int> nums1_copy(nums1);
	merge(nums1_copy, m, nums2, n);
	return answer == nums1_copy;
}