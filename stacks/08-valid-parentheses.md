# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

I used a stack to check whether the brackets are valid. Opening brackets are pushed onto the stack. When a closing bracket is encountered, I check whether it matches the most recently opened bracket. If it does not match, the string is invalid. At the end, the stack must be empty for the string to be valid.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes

I tested the solution locally using valid and invalid bracket sequences, including an empty string. The solution was then submitted to LeetCode and received an Accepted result.