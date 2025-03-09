#include <iostream>

int main(){

//even 
    // int num;
    // std::cout<<"Enter a number: "<<std::endl;
    // std::cin>>num;
    // for (int i=1;i<=num;++i){
    //     if (i%2==0)
    //         std::cout<<i<<std::endl;
    // }
    // return 0;

//odd
    int num;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>num;
    for (int i=1;i<=num;++i){
        if (i%2==1)
            std::cout<<i<<std::endl;
    }
    return 0;
}