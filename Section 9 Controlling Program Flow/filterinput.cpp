#include <iostream>

int main(){
    // int num;
    
    ////while while loop
    // while (num>100||num<1){
    //     std::cout<<"Rate your experience (1-100)"<<std::endl;
    //     std::cin>>num;
    //     std::cout<<"Number not valid, please enter a number less or equal to 100!"<<std::endl;
    // }
    // std::cout<<"Thanks for your feedback!"<<std::endl;

    //with do-while loop(cleaner look and logic)
    int num;
    do{
        std::cout<<"Rate your experience (1-100)"<<std::endl;
        std::cin>>num;
    }while(num>100||num<1);
    std::cout<<"Thanks for your feedback!"<<std::endl;
}