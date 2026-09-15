# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

## Approach

I used a position pointer to move all non-zero elements to the front of the array while maintaining their original order. After placing all non-zero elements, I filled the remaining positions with zeroes.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

I tested the solution locally using a normal case containing zero and non-zero values and an edge case containing only zeroes. The solution was then submitted to LeetCode and received an Accepted result.