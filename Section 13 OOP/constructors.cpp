#include <iostream>

class Player{
private:
int health;
int xp;
std::string name;
public:
void set_name(std::string name_to_set){
    name=name_to_set;
}
//overloaded constructors
Player(){
    std::cout<<"No arguments constructor called"<<std::endl;
}
Player(std::string name){
    std::cout<<"String argument constructor called"<<std::endl;
}
Player(std::string name,int health,int xp){
    std::cout<<"One string and two intergers constructor called"<<std::endl;
}
//decstructor
~Player(){
    std::cout<<"destructor called for "<<name<<std::endl;
}
};



int main(){
    {
    Player frank;
    frank.set_name("Frank");
    Player maria{"Maria"};
    maria.set_name("Maria");
    Player hero{"Hero",100,389};  
    hero.set_name("Hero"); 
    }
    
    Player *enemy = new Player("Enemy",1000,453);
    (*enemy).set_name("Frank");
    //or enemy->set_name("Frank");
    delete enemy;
    return 0;
}