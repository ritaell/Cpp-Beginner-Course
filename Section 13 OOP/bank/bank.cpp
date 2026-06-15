#include "bank.h"
#include <iostream>

void bank::set_balance(double bal){
balance=bal;
}

bool bank::withdraw(double ammount){
    if (balance-ammount<0){
        //std::cout<<"Insufficient funds"<<std::endl;
        return false;
    }
    else{
        balance-=ammount;
        return true;
    }
}

bool bank::deposit(double ammount){
    balance+=ammount;
    return true;
}

double bank::get_balance(){
    double bal=balance;
    return bal;
}