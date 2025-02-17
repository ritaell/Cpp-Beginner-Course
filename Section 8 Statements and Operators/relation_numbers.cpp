#include <iostream>


int main(){
    int num1,num2;
    std::cout<<"Enter 2 integers seperated by space: "<<std::endl;
    std::cin>>num1>>num2;
    std::cout<<((num1!=num2)?((num1>num2)?"num1 is greater than num2":"num2 is greater than num1"):"num1 is equal to num2")<<std::endl;
    return 0;
}
