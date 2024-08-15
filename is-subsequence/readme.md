# Gas Station

## `Problem link `
https://leetcode.com/problems/is-subsequence/description/

##
`Description`<br>
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
 

Constraints:

0 <= s.length <= 100
0 <= t.length <= 104
s and t consist only of lowercase English letters.

### Purpose 
 The `isSubsequence` function determines whether the string `s` is a subsequence of the string `t`. A subsequence means that the characters of `s` appear in `t` in the same order, but not necessarily consecutively.

### Key Concepts

1.  **Two Pointers Technique:**

    -   The function uses two pointers (or indices), `i` and `j`, to traverse the strings `s` and `t` respectively.
    -   `i` tracks the current position in the string `s`.
    -   `j` tracks the current position in the string `t`.
2.  **Subsequence Definition:**

    -   A string `s` is considered a subsequence of `t` if you can remove some or none of the characters in `t` without changing the order of the remaining characters to get `s`.

### Solution

1.  **Initialization:**

    -   The function initializes two counters, `i` and `j`, both set to 0. These counters are used to iterate over `s` and `t`, respectively.
2.  **Empty Strings Check:**

    -   If both strings `s` and `t` are empty (`s[i] == '\0'` and `t[j] == '\0'`), then `s` is trivially a subsequence of `t`, so the function returns `true`.
3.  **Traversal of String `t`:**

    -   The function loops through the string `t` (`while(t[j] != '\0')`):
        -   If the current character of `s` (`s[i]`) matches the current character of `t` (`t[j]`), increment both `i` and `j` to check the next character in both strings.
        -   If they do not match, only increment `j` to continue searching in `t`.
4.  **Subsequence Detection:**

    -   If `s[i]` reaches the end of `s` (`s[i] == '\0'`), it indicates that all characters of `s` have been found in `t` in the correct order, so the function returns `true`.
5.  **Conclusion:**

    -   If the loop ends without having matched all characters of `s`, return `false`, indicating `s` is not a subsequence of `t`.