#include <string>
#include <vector>
#include <iostream>

class  Player{
//attributes
std::string name{"Player"};
int health{100};//default values
int xp{3};
//methods
void talk(std::string);
bool is_dead();
};

class Account{
    //attributes
    std::string name{"Account"};
    double balance{0.0};
    //methods
    bool deposit(double);
    bool withdraw(double);
};


int main(){
    Player rita;
    Player hero;

    Player players[] {rita,hero};

    std::vector<Player> player_vec {rita};
    player_vec.push_back(hero);

    Player *enemy {nullptr};
    enemy=new Player;
    delete enemy;




    Account rita_acc;
    Account alex_acc;
    return 0;
}