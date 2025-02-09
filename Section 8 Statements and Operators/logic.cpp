#include <iostream>

int main(){
    const int min {10};
    const int max {20};
    std::cout<<"Please enter a number between 10 and 20: "<<std::endl;
    int number;
    std::cin>>number;
    std::cout<<std::boolalpha;
    std::cout<<"number is between 10 and 20: "<<(number>min&&number<max)<<std::endl;
    return 0;
}