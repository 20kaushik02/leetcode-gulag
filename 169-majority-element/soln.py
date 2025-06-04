def majorityElement(self, nums: list[int]) -> int:
    # O(n) time, O(n) space
    # cnts = {}
    # for x in nums:
    #     cnts[x] = cnts.get(x, 0) + 1
    #     if cnts[x] > len(nums) / 2:
    #         return x

    # O(n) time, O(1) space
    # Boyer-Moore majority vote algorithm
    # given: majority exists (>n/2, NOT just n/2)
    # voters fight 1v1 MAD, last standing must be of majority
    leading_candidate = nums[0]
    count = 0
    for x in nums:
        # MAD; new leader must emerge
        if count == 0:
            count = 1
            leading_candidate = x
        # dissent; majority weakens
        elif x != leading_candidate:
            count -= 1
        # assent; majority strengthens
        else:
            count += 1
    return leading_candidate
