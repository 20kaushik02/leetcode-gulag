def rotate(self, nums: list[int], k: int) -> None:
    """
    Do not return anything, modify nums in-place instead.
    """
    # O(n) space and time
    # n = len(nums)
    # k %= n
    # nums[:] = nums[n-k:] + nums[:n-k]

    # O(n) time, O(1) space
    # reverse full - then reverse chunks
    def partrev(arr, low, high):
        while low < high:
            arr[low], arr[high] = arr[high], arr[low]
            low += 1
            high -= 1

    n = len(nums)
    k %= n
    partrev(nums, 0, n - 1)
    partrev(nums, 0, k - 1)
    partrev(nums, k, n - 1)
