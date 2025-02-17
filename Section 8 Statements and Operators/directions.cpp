#include <iostream>


int main(){
enum direction{left,right,up,down};

direction heading {left};

switch (heading) {
    case left:
        std::cout<<"Heading left...";
        break;
    case right:
        std::cout<<"Heading right..";
        break;
    case up:
        std::cout<<"Heading up...";
        break;
    case down:
        std::cout<<"Heading down...";
        break;
    default:
    std::cout<<"OK";   
};  
return 0;  
}

