#include <stdio.h>

/*
    We will test whether memory on the stack is automatically overwritten when the current 
    function call is popped off the stack. 

    Implications; if there is no automatic garbage collection, then the values should still be
    accessible before any other function calls are pushed onto the stack, whereby the new
    function call may rewrite the data stored at the old memory addresses.

    Question: Define a function that allocates an array in the stack, and return a pointer to it.
    Can we use the pointer in main? 

    Conclusion: there is no automatic garbage collection. The problem with storing the data on the
    stack is that as soon as the function is popped off there is no restriction for other functions
    to not write into the same memory addresses. If you allocate memory in the heap, the malloced memory
    cannot be written into by other functions until it is freed. This is why storing persistent data
    on the heap is safe but not on the stack.
*/

int *allocateArray(void){
    int arr[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    int *ptr = arr;
    return ptr;
}

int main(void){
    int *arrPtr = allocateArray();
    for(int i = 0; i < 3; i++){
        printf("%d", arrPtr[i]);
    }
}