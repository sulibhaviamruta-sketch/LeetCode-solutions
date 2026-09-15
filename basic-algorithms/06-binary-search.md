# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

## Approach

I used the binary search algorithm because the input array is sorted. I maintain two pointers, left and right, and repeatedly calculate the middle index. If the middle value equals the target, I return its index. If the middle value is smaller than the target, I search the right half. Otherwise, I search the left half.

## Complexity

- Time: O(log n)
- Space: O(1)

## Notes

I tested the solution locally with one case where the target exists and one case where the target does not exist. The solution was then submitted to LeetCode and received an Accepted result.