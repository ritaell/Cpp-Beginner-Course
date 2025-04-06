#include <iostream>
#include <cstring>

int main(){
    char name[20]{};
    char lastname[20]{};
    char fullname[40]{};

    std::cout<<"Enter your name: "<<std::endl;
    std::cin>>name;
    std::cout<<"Enter your last name: "<<std::endl;
    std::cin>>lastname;

    std::cout<<"Hello "<<name<<" your name has "<<strlen(name)<<" characters"<<std::endl;
    std::cout<<"And your last name, "<<lastname<<" has "<<strlen(lastname)<<" characters"<<std::endl;

    strcpy(fullname, name);
    strcat(fullname," ");
    strcat(fullname,lastname);

    std::cout<<"Your full name is "<<fullname<<std::endl;

    return 0;
}
