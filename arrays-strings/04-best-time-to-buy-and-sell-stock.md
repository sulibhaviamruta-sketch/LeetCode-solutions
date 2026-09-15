# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

I used a one-pass approach. I keep track of the minimum stock price seen so far. For each price, I calculate the possible profit by subtracting the minimum price from the current price. I update the maximum profit whenever a larger profit is found.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

I tested the solution locally with a normal case where a profit is possible and an edge case where the prices continuously decrease. The solution was then submitted to LeetCode and received an Accepted result.