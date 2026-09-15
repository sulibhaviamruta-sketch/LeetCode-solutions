# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

## Approach

I used a frequency-counting approach. I store the frequency of each character in the first string and then subtract the frequency of each character in the second string. If all character counts become zero, the two strings are anagrams.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

I tested the solution locally using one anagram case and one non-anagram case before submitting it to LeetCode.