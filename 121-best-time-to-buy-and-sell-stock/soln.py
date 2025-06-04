def maxProfit(self, prices: list[int]) -> int:
    lowest = prices[0]
    max_profit = 0

    for x in prices[1:]:
        if x - lowest > max_profit:
            max_profit = x - lowest
        if x < lowest:
            lowest = x

    return max_profit
