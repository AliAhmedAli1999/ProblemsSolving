# Min Stack

## `Problem link `
https://leetcode.com/problems/min-stack/description/?envType=study-plan-v2&envId=top-interview-150

##
`Description`<br>
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.

 

Example 1:

Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
 

Constraints:

-231 <= val <= 231 - 1
Methods pop, top and getMin operations will always be called on non-empty stacks.
At most 3 * 104 calls will be made to push, pop, top, and getMin.

### Purpose

The purpose of this code is to implement a data structure called `MinStack` which is a stack with an additional capability: it can efficiently retrieve the minimum value in the stack. This is done by maintaining the minimum value at each level of the stack, allowing constant time retrieval of the minimum value.

### Key Concepts

1.  **Stack Data Structure**:

    -   A stack follows the Last-In-First-Out (LIFO) principle, where the most recently added element is the first one to be removed.
    -   It supports two primary operations: `push` (to add an element) and `pop` (to remove the top element).
2.  **Tracking Minimum Value**:

    -   To efficiently retrieve the minimum value in the stack, the code maintains an additional piece of information: the minimum value up to the current element in the stack.
    -   This is achieved by extending the stack element to store the current minimum value along with the element's value.
3.  **Dynamic Memory Allocation**:

    -   The `minStackCreate` function uses `malloc` to dynamically allocate memory for the `MinStack` instance, allowing it to be used for storing elements.
4.  **Index Management**:

    -   `currentIndex` keeps track of the top of the stack. It starts at `-1` (indicating an empty stack) and is incremented or decremented as elements are pushed or popped.

### Solution

The solution involves implementing several functions to manage the `MinStack`:

1.  **`MinStack* minStackCreate()`**:

    -   Allocates memory for a new `MinStack` instance.
    -   Initializes `currentIndex` to `-1` to indicate an empty stack.
    -   Returns a pointer to the newly created `MinStack`.
2.  **`void minStackPush(MinStack* obj, int val)`**:

    -   Increments `currentIndex` to point to the new top of the stack.
    -   Stores the given value (`val`) at the new top position in the stack array.
    -   Updates the `currentMinValue` for the new top element:
        -   If the stack is being initialized or the new value is less than the previous minimum, the new value becomes the new minimum.
        -   Otherwise, the minimum value remains the same as the previous top's minimum value.
3.  **`void minStackPop(MinStack* obj)`**:

    -   Decrements `currentIndex` to remove the top element from the stack.
4.  **`int minStackTop(MinStack* obj)`**:

    -   Returns the value of the top element in the stack by accessing `obj->stack[obj->currentIndex].value`.
5.  **`int minStackGetMin(MinStack* obj)`**:

    -   Returns the current minimum value in the stack by accessing `obj->stack[obj->currentIndex].currentMinValue`.
6.  **`void minStackFree(MinStack* obj)`**:
    - free the allocated memory by using `free(obj)` 