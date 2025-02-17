#include <iostream>

int main()
{
    int num;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>num;
    std::cout<<((num%2==0)?"Even":"Odd");
    return 0;
}