#include <iostream>

int main(){
char vowels [] {'a','e','i','o','u'};
std::cout<<"The first vowel is "<<vowels[0]<<std::endl;
std::cout<<"The last vowel is "<<vowels[4]<<std::endl;
std::cout<<"=================================="<<std::endl;
std::string  names [] {"Rita","Maria","George"};
std::cout<<"The first name is "<<names[0]<<std::endl;    //before changing content of array element
names[0]="Alex";
std::cout<<"The first name is now "<<names[0]<<std::endl;   //after changing content of array element 
std::cout<<"=================================="<<std::endl;
std::cout<<"Enter 5 numbers seperated by spaces: "<<std::endl;
int numbers [] {};
std::cin>>numbers[0];
std::cin>>numbers[1];
std::cin>>numbers[2];
std::cin>>numbers[3];
std::cin>>numbers[4];
std::cout<<"In index 0 is located the numbers: "<<numbers[0]<<std::endl;
std::cout<<"In index 1 is located the numbers: "<<numbers[1]<<std::endl;
std::cout<<"In index 2 is located the numbers: "<<numbers[2]<<std::endl;
std::cout<<"In index 3 is located the numbers: "<<numbers[3]<<std::endl;
std::cout<<"In index 4 is located the numbers: "<<numbers[4]<<std::endl;
}



