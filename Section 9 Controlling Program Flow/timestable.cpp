#include <iostream>

int main(){
    std::cout<<"Enter a number you want to see it's multiplication table"<<std::endl;
    int num;
    std::cin>>num;
    for (int i=1;i<=10;++i){
        std::cout<<num<<"*"<<i<<"="<<(num*i)<<std::endl;
    }
    return 0;
}