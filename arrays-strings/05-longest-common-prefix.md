# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach

I used a character-by-character comparison approach. I use the first string as the reference and compare each character with the same position in all the other strings. If a character is different or another string ends, the common prefix ends at that position.

## Complexity

- Time: O(n × m)
- Space: O(1)

where n is the number of strings and m is the length of the shortest string.

## Notes

I tested the solution locally using a case with a common prefix and a case with no common prefix. The solution was then submitted to LeetCode and received an Accepted result.