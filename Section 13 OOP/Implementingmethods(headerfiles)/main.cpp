#include <iostream>
#include "Account.h"

int main(){
Account rita_account;
rita_account.set_balance(200.0);
double bal=rita_account.get_balance();
std::cout<<bal<<std::endl;
    return 0;
}