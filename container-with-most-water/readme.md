# Container With Most Water

## `Problem link `
https://leetcode.com/problems/container-with-most-water/description/?envType=study-plan-v2&envId=top-interview-150

## `Description`<br>
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.
Example 1:

Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1
 

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104

### Purpose

The purpose of the `maxArea` function is to find the maximum area of water that can be trapped between two lines in a list of heights. Given an array where each element represents the height of a vertical line, the function calculates and returns the largest possible area formed between any two lines.

### Key Concepts

1.  **Two-Pointer Technique:**

    -   The function uses two pointers (`Left` and `Right`) to explore potential pairs of lines. One pointer starts at the beginning of the array and the other at the end. By adjusting these pointers, the function evaluates different line pairs to find the maximum area.
2.  **Area Calculation:**

    -   The area of water between two lines is determined by the shorter of the two lines  multiplied by the distance between the lines.
3.  **Efficiency:**

    -   The two-pointer approach is efficient because it reduces the time complexity to O(n), where n is the number of lines.

### Solution

1.  **Initialize Pointers and Variables:**

    -   `Left` is initialized to the start of the array.
    -   `Right` is initialized to the end of the array.
    -   `max` is initialized to 0 to keep track of the maximum area found.
2.  **Iterate Using While Loop:**

    -   The loop continues as long as `Left` is not equal to `Right`.
    -   In each iteration, the shorter height between `height[Left]` and `height[Right]` is used to compute the area.
    -   Update the `max` area if the computed area is larger than the current `max`.
3.  **Move Pointers:**

    -   To explore new potential pairs, the pointer pointing to the shorter line is moved inward:
    -   If `height[Right]` is less than  `height[Left]`, decrement the `Right` pointer.
    -   Otherwise, increment the `Left` pointer.
4.  **Return Result:**

    -   Once the loop completes (i.e., the two pointers meet), the function returns the maximum area found during the iterations.
