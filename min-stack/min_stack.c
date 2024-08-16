#include "min_stack.h"

MinStack* minStackCreate() {
MinStack* obj = (MinStack*) malloc(sizeof(MinStack));
obj->currentIndex = -1;
return obj;
}

void minStackPush(MinStack* obj, int val) {
        obj->currentIndex++;
    obj->stack[obj->currentIndex].value = val ;
    /*check if it's the first element */
    if(obj->currentIndex == 0)
    {
        obj->stack[obj->currentIndex].currentMinValue = val;
    }
    else
    {
        if (obj->stack[obj->currentIndex -1].currentMinValue >val)
        {
            obj->stack[obj->currentIndex].currentMinValue = val;
        }
        else
        {
            obj->stack[obj->currentIndex].currentMinValue = obj->stack[obj->currentIndex-1].currentMinValue;
        }
    }

}

void minStackPop(MinStack* obj) {
   obj->currentIndex--;
}

int minStackTop(MinStack* obj) {
   return obj->stack[obj->currentIndex].value;
}

int minStackGetMin(MinStack* obj) {
    return obj->stack[obj->currentIndex].currentMinValue;
}

void minStackFree(MinStack* obj) {
  free(obj);
}
