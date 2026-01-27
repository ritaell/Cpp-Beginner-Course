#include <iostream>
#include <string>

class  Player{
public:
//attributes
std::string name;
int health;
int xp;
//methods
void talk(std::string text){std::cout<<name<<" says "<<text<<std::endl;}
bool is_dead();
};


class Account{
    public:
    //attributes
    std::string name{"Account"};
    double balance;
    //methods
    bool deposit(double bal){balance+=bal; return true;};
    bool withdraw(double bal){balance-=bal; return true;};
};



int main(){
//creating a player object
Player rita;    
//initializing its attributes
rita.name="Rita";
rita.health=99;
rita.xp=12;     
rita.talk("Hello world");


//same with ptr
Player *enemy = new Player;
(*enemy).name="Enemy";
(*enemy).health=88;
enemy->xp=17;
enemy->talk("I will destroy you");


Account alex;
alex.balance=100.00;
std::cout<<alex.balance<<std::endl;
alex.deposit(10.00);
std::cout<<alex.balance<<std::endl;
alex.withdraw(25.00);
std::cout<<alex.balance<<std::endl;
return 0;
}