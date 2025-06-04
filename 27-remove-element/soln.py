def removeElement(self, nums: list[int], val: int) -> int:
    i = 0
    for x in nums:
        if x != val:
            nums[i] = x
            i += 1
    return i
