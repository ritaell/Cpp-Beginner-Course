#include <iostream>
class dog{
    public:
    std::string name;
    int age;
    void bark(){
        std::cout<<"bark!"<<std::endl;
    }
};
int main(){
    dog Alex;
    Alex.bark();
    return 0;
}