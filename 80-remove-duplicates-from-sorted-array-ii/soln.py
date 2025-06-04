def removeDuplicates(self, nums: list[int]) -> int:
    # two pointer
    last_unique = 0
    flag = False
    for fast in range(1, len(nums)):
        if nums[last_unique] != nums[fast]:
            flag = False
            last_unique += 1
            nums[last_unique] = nums[fast]
        elif not flag:
            flag = True
            last_unique += 1
            nums[last_unique] = nums[fast]
    return last_unique + 1  # zero-indexed
