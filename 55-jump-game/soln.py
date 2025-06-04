def canJump(self, nums: list[int]) -> bool:
    n = len(nums)
    if n == 1:
        return True
    if nums[0] == 0:
        return False
    dp = [False] * n
    dp[n - 1] = True

    for idx in range(n - 2, -1, -1):
        for reach in range(0, nums[idx]):
            if dp[idx + reach + 1] == True:
                dp[idx] = True
                break
    return dp[0]
