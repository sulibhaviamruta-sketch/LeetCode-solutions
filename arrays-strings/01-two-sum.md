# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

## Approach

I used a nested-loop approach to check every possible pair of elements in the array. For each pair, I check whether their sum is equal to the target value. When the required pair is found, I return the indexes of those two elements.

## Complexity

- Time: O(n²)
- Space: O(1) auxiliary space

## Notes

I first tested the solution locally in VS Code before submitting it to LeetCode. I tested a typical case and another case where the required elements were at different indexes. The solution was then submitted successfully and received an Accepted result.