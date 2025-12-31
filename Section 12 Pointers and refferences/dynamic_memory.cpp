#include <iostream>

int main(){
    size_t size{0};
    int *nums_ptr {nullptr};
    std::cout<<"How many nums? "<<std::endl;
    std::cin>>size;
    nums_ptr=new int[size];
    std::cout<<nums_ptr<<std::endl; //location in heap memory
    delete [] nums_ptr;
    return 0;
}