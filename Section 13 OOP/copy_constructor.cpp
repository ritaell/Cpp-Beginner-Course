#include <iostream>
#include <string>

class Player{
    private:
    std::string name;
    int health;
    int xp;
    public:
    std::string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    Player(std::string name_val="None",int health_val=0,int xp_val=0);
    //Copy constructor
    Player(const Player &source);
    //decstructor
    ~Player(){std::cout<<"Destructor called"<<std::endl;}
    
};

Player::Player(std::string name_val,int health_val, int xp_val)
:name{name_val},health{health_val},xp{xp_val}{
std::cout<<"Three agrs constructor for "<<name<<std::endl;
}

Player::Player(const Player &source)
//:name{source.name},health{source.health},xp{source.xp}     
:Player{source.name,source.health,source.xp} //using deligationg constructor instad of initialized list
{
std::cout<<"Copy constructor for "<<source.name<<std::endl;    
}

void display(Player p){
std::cout<<"name: "<<p.get_name()<<std::endl;
std::cout<<"health: "<<p.get_health()<<std::endl;
std::cout<<"xp: "<<p.get_xp()<<std::endl;
}

int main(){
    Player Empty;
    Player Hero{"Hero"};
    Player another_hero{Hero};
    Player Rita{"Rita",12,43};
    display(Rita);
    return 0;
}

//desctructor is called 4 time (3 for the 3 objects created and 1 for the copy of the object Rita thats created from the function display)