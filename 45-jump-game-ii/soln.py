def jump(self, nums: list[int]) -> int:
    n = len(nums)
    if n == 1:
        return 0
    dp = [1e5] * n
    dp[n - 1] = 0

    for idx in range(n - 2, -1, -1):
        for reach in range(0, nums[idx]):
            # overshot, auto-success
            if idx + reach + 1 >= n - 1:
                dp[idx] = 1
                break
            # else, chain-reachable
            if dp[idx + reach + 1] <= 10000:
                dp[idx] = min(dp[idx], dp[idx + reach + 1] + 1)
    return dp[0]
