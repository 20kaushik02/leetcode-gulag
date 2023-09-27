#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using std::vector;

class Solution
{
public:
	void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
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
	}
};