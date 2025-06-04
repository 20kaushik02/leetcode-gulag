class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        # naive, hashmap
        # cnts = {}
        # k = 0
        # for x in nums:
        #     if cnts.get(x) == None:
        #         k += 1
        #     cnts[x] = cnts.get(x, 0) + 1
        # for idx, key in enumerate(cnts.keys()):
        #     nums[idx] = key
        # return k
        # two pointer
        last_unique = 0
        for fast in range(1, len(nums)):
            if nums[last_unique] != nums[fast]:
                last_unique += 1
                nums[last_unique] = nums[fast]
        return last_unique + 1  # zero-indexed
