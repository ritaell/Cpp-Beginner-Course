#include <iostream>
int *create_array(size_t size, int initvalue);

int main(){
    int  *myarray {nullptr};
    myarray = create_array(3,3);
    for (int i; i<3;i++){
        std::cout<<myarray[i]<<std::endl;
    }
    return 0;
}

int *create_array(size_t size, int initvalue){
    int *array_ptr {nullptr};
    array_ptr = new int[size];
    for (size_t i{0};i<size;i++){
        array_ptr[i]=initvalue;
    }
    return array_ptr;
}