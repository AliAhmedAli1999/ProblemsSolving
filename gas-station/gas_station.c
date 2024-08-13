#include "gas_station.h"

int sum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}


void tankValueAtEachPoint(int *gas, int *cost, int *tankValue, int size) {
    for (int i = 0; i < size; i++) {
        tankValue[i] = gas[i] - cost[i];
    }
}

int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
    int sumOfGas =  sum(gas,gasSize);
    int sumOfCost = sum(cost,costSize);
    int currentTank = 0;
    int currentStation = -1;    
    if(sumOfGas>=sumOfCost)
    {
        currentStation = 0;
        /*we need to make an array to indicate at the starting of each point what our tank     equal*/
        int* tankValue = (int*)malloc(costSize * sizeof(int));
        tankValueAtEachPoint(gas,cost,tankValue,costSize);
        /*now will make our greedy steps*/
        for(int i = 0;i<costSize;i++)
        {
            currentTank = currentTank + tankValue[i];
            if(currentTank<0)
            {
                currentTank = 0;
                currentStation = i+1;
            }
        }
       
    }
    else
    {
        /*Do nothing*/
    }

     return currentStation;
}