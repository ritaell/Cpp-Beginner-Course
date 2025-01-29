#include <iostream>
#include <vector>

int main(){
std::vector <int> numbers {1,2,3};

std::cout<<"numbers: "<<std::endl;
std::cout<<numbers.at(0)<<std::endl;
std::cout<<numbers.at(1)<<std::endl;
std::cout<<numbers.at(2)<<std::endl;
std::cout<<"Enter another number"<<std::endl;
int num1;
std::cin>>num1;
numbers.push_back(num1);
std::cout<<"Enter another number: "<<std::endl;
int num2;
std::cin>>num2;
numbers.push_back(num2);
std::cout<<"updated numbers: "<<std::endl;
std::cout<<numbers.at(0)<<std::endl;
std::cout<<numbers.at(1)<<std::endl;
std::cout<<numbers.at(2)<<std::endl;
std::cout<<numbers.at(3)<<std::endl;
std::cout<<numbers.at(4)<<std::endl;

return 0;
}

