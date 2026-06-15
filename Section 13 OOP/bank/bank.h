#pragma once
class bank{
    private:
    double balance;
    public:
    void set_balance(double bal);
    bool withdraw(double ammount);
    bool deposit(double ammount);
    double get_balance();
}  ; 