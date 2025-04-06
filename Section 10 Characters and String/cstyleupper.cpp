#include <iostream>
#include <cctype>
#include <cstring>

int main(){
    char smth[100]{};
    std::cout<<"Enter something: "<<std::endl;
    std::cin.getline(smth,100);

    for(size_t i=0;i<strlen(smth);i++){
        if (isalpha(smth[i]))
            smth[i]=toupper(smth[i]);
    }

    std::cout<<smth<<std::endl;

    return 0;
}