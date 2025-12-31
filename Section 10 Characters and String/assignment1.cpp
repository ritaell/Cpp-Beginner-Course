#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout<<"Enter a string to create a letter pyramid: "<<std::endl;
    std::getline(std::cin, str);  
    while (true){
        if (str.empty())
            std::cout<<"String is empty, please enter a string to create a letter pyramid: "<<std::endl;  
        else
            break;
    }

    for (int i=0;i<str.length();i++){
            for (int f=str.length()-i;f>=0;--f){
                std::cout<<" ";
            }
            for (int j=0;j<=i;j++){
                std::cout<<str[j];
            }
            for (int x=i;x!=0;x--){
                std::cout<<str[x-1];
            }
        std::cout<<std::endl;
        }
        return 0;
    }





