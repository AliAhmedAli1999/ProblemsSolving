#ifndef minstackH
#define minstackH

/******* The Defines************/
#define stackSize 100000  /*the max number of elements in the array*/


/**
 * @brief Represents an element in the min stack.
 * 
 * This structure is used to store the value of an element in the stack along with 
 * the minimum value that is present in the stack up to and including this element.
 * 
 * @struct Element
 */

typedef struct {
int value;
int currentMinValue;
} Element;

/**
 * @brief Represents a min stack data structure.
 * 
 * 
 * @struct MinStack
 */
typedef struct {
Element stack [stackSize] ;
int currentIndex ;
} MinStack;


/**
 * @brief Creates and initializes a new `MinStack` instance.
 * 
 * 
 * @param (void)
 * 
 * @return A pointer to the newly created `MinStack` instance
 */
MinStack* minStackCreate();



/**
 * @brief Pushes a new value onto the `MinStack`.
 * 
 * 
 * @param obj A pointer to the `MinStack` instance where the value will be pushed.
 * @param val The integer value to be added to the stack.
 * 
 * @return none
 * */
void minStackPush(MinStack* obj, int val);


/**
 * @brief Removes the top element from the `MinStack`.
 * 
 * @return none
 * */
void minStackPop(MinStack* obj);

/**
 * @brief Retrieves the top value of the `MinStack` without removing it.
 * 
 * @param obj A pointer to the `MinStack` instance from which the top value will be retrieved.
 * 
 * @return The value of the top element in the stack.
 * */
int minStackTop(MinStack* obj);

/**
 * @brief Retrieves the minimum value in the `MinStack`.
 * 
 * @param obj A pointer to the `MinStack` instance from which the minimum value will be retrieved.
 * 
 * @return The minimum value in the stack.
 * */
int minStackGetMin(MinStack* obj);

/**
 * @brief Frees the memory allocated for a `MinStack` instance.
 * 
 * @param obj A pointer to the `MinStack` instance that will be freed.
 * 
 * @return none
 * */
void minStackFree(MinStack* obj);


#endif