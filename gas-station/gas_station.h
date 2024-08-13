#ifndef gasstationH
#define gasstationH
/**
 * Computes the sum of the elements in an array.
 * 
 * @param arr Pointer to the array of integers.
 * @param size The number of elements in the array.
 * @return The sum of the elements in the array.
 */
int sum(int *arr, int size);

/**
 * Computes the tank value at each point in the journey by subtracting the cost from the gas available.
 * 
 * @param gas Pointer to the array of gas values at each station.
 * @param cost Pointer to the array of cost values to travel from each station.
 * @param tankValue Pointer to the array where the tank value at each station will be stored.
 * @param size The number of stations  (size of the arrays).
 */
void tankValueAtEachPoint(int *gas, int *cost, int *tankValue, int size);


/**
 * Determines the starting station index from which a vehicle can complete a circular route with the given gas and cost arrays.
 * 
 * @param gas Pointer to the array of gas values at each station.
 * @param gasSize The number of elements in the gas array.
 * @param cost Pointer to the array of cost values to travel from each station.
 * @param costSize The number of elements in the cost array.
 * @return The index of the starting station if the journey can be completed; otherwise, returns -1.
 */
int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize);

#endif