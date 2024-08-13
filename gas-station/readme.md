# Gas Station

## `Problem link `
https://leetcode.com/problems/gas-station/description/?envType=study-plan-v2&envId=top-interview-150

##
`Description`<br>
There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique

 

Example 1:

Input: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
Output: 3
Explanation:
Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 4. Your tank = 4 - 1 + 5 = 8
Travel to station 0. Your tank = 8 - 2 + 1 = 7
Travel to station 1. Your tank = 7 - 3 + 2 = 6
Travel to station 2. Your tank = 6 - 4 + 3 = 5
Travel to station 3. The cost is 5. Your gas is just enough to travel back to station 3.
Therefore, return 3 as the starting index.
Example 2:

Input: gas = [2,3,4], cost = [3,4,3]
Output: -1
Explanation:
You can't start at station 0 or 1, as there is not enough gas to travel to the next station.
Let's start at station 2 and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 0. Your tank = 4 - 3 + 2 = 3
Travel to station 1. Your tank = 3 - 3 + 3 = 3
You cannot travel back to station 2, as it requires 4 unit of gas but you only have 3.
Therefore, you can't travel around the circuit once no matter where you start.
 

Constraints:

n == gas.length == cost.length
1 <= n <= 105
0 <= gas[i], cost[i] <= 104

### Purpose

The primary purpose of the `canCompleteCircuit` function is to determine if there is a starting gas station in a circular route from which a vehicle can complete a full circuit, given arrays representing the amount of gas available at each station and the cost to travel to the next station.


### Key Concepts

1.  **Circular Route:** The problem assumes a circular arrangement of gas stations. Thus, after the last station, you need to consider that the route continues from the first station.

2.  **Feasibility Check:** Before attempting to find a valid starting point, the function first checks if completing the circuit is theoretically possible by comparing the total amount of gas with the total cost required.

3.  **Greedy Approach:** The function uses a greedy algorithm to find the valid starting point. It calculates the difference between available gas and the cost required for each station to determine if a full circuit can be completed starting from a specific station.

### Solution

1.  **Calculate Total Gas and Cost:**

    -   The function calculates the total amount of gas available (`sumOfGas`) and the total cost required to travel to all stations (`sumOfCost`).
    -   If `sumOfGas` is less than `sumOfCost`, it is impossible to complete the circuit, so the function returns `-1`.
2.  **Compute Tank Values:**

    -   If completing the circuit is feasible, the function calculates the tank value for each station. This value is the net gain or loss of gas when traveling from that station to the next one.
3.  **Determine Starting Station:**

    -   Using a greedy approach, the function iterates through the stations, keeping track of the current tank level. If the tank level drops below zero, it means the journey cannot be completed from the current starting point. The function then updates the starting point to the next station and resets the tank level.
4.  **Return Result:**

    -   After evaluating all stations, the function returns the index of the valid starting station if one is found. If no valid starting station is found, it returns `-1`.