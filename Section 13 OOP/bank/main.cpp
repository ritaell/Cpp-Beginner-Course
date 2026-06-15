#include <iostream>
#include "bank.h"

int main()
{
    bank rita;
    rita.set_balance(200.00);
    std::cout << "balance: " << rita.get_balance() << std::endl;
    if (rita.withdraw(300))
    {
        std::cout << "Withdrawal complete" << std::endl;
    }
    else
    {
        std::cout << "Insufficient funds" << std::endl;
    }

    rita.deposit(1000);
    std::cout << "balance: " << rita.get_balance() << std::endl;
    if (rita.withdraw(300))
    {
        std::cout << "Withdrawal complete" << std::endl;
    }
    else
    {
        std::cout << "Insufficient funds" << std::endl;
    }

    std::cout << "balance: " << rita.get_balance() << std::endl;
    return 0;
}