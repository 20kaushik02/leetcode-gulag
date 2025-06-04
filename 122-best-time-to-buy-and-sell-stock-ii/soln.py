def maxProfit(self, prices: list[int]) -> int:
    cur_start = 0
    diff_sum = 0
    for idx in range(1, len(prices)):
        if prices[idx] > prices[cur_start]:
            diff_sum += prices[idx] - prices[cur_start]
        cur_start = idx
    return diff_sum
