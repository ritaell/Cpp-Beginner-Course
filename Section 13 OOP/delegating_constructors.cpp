#include <iostream>
#include <string>

class Player{
    private:
    int xp;
    int health;
    std::string name;
    public:
    Player();
    Player(std::string name_val, int health_val, int xp_val);
    Player(std::string name_val);
    ~Player();
};

Player::Player(std::string name_val, int health_val, int xp_val)
:name{name_val},health{health_val},xp{xp_val}{
std::cout<<"deligation constructor created"<<std::endl;
}

Player::Player(std::string name_val)
:Player{name_val,0,0}{
std::cout<<"string constructor"<<std::endl;
}

Player::Player()
    :Player{"None",0,0}{
std::cout<<"no args constructor"<<std::endl;
}

Player::~Player(){
    std::cout<<"destructor called for "<<name<<std::endl;
}


int main(){
Player empty;
Player rita{"Rita"};
Player hero{"hero",100,55};

return 0;
}