#include <iostream>



int main(){
std::cout<<"Enter amount of cents"<<std::endl;
int cents;
std::cin>>cents;

int dolars=cents/100.0;//how many dollars
cents%=100;//store the remaining cents

int quarters=cents/25.0;
cents%=25;

int dimes=cents/10.0;
cents%=10;

int nickels=cents/5.0;
cents%=5;

int pennies=cents/1.0;
cents&=1;

std::cout<<"dolars:"<<dolars<<std::endl<<"quarters:"<<quarters<<std::endl<<"dimes:"<<dimes<<std::endl<<"nickels:"<<nickels<<std::endl<<"pennies:"<<pennies<<std::endl;
return 0;    
}
