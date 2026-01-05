#include <iostream>


void swapPointers(int* ptr1, int* ptr2){

    int *var = nullptr;
    var=new int;
    *var = *ptr1;
    *ptr1=*ptr2;
    *ptr2=*var;
    delete var;
    }


    //or

    void swapPointers(int* ptr1, int* ptr2) {
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    
}