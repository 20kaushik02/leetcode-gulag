def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
    """
    Do not return anything, modify nums1 in-place instead.
    """
    i = 0
    j = 0
    nums3 = []
    # one at a time
    while i < m and j < n:
        if nums1[i] < nums2[j]:
            nums3.append(nums1[i])
            i += 1
        else:
            nums3.append(nums2[j])
            j += 1

    # deplete nums1
    while i < m:
        nums3.append(nums1[i])
        i += 1
    # deplete nums2
    while j < n:
        nums3.append(nums2[j])
        j += 1
    # optimize this?
    for idx, val in enumerate(nums3):
        nums1[idx] = val
