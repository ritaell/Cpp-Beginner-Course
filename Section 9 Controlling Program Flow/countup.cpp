#include <iostream>

int main(){
    std::cout<<"Enter a number: "<<std::endl;
    int num;
    std::cin>>num;
    
    int i =1;
    while (i<=num){
        std::cout<<i<<std::endl;
        i++;
    }
    return 0;
}