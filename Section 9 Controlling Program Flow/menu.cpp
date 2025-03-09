#include <iostream>


int main(){
char selection;
do{
std::cout<<"-------------------------"<<std::endl;
std::cout<<"1. Do this"<<std::endl;
std::cout<<"2. Do that"<<std::endl;
std::cout<<"3. Do something else"<<std::endl;
std::cout<<"Q. Quit"<<std::endl;

std::cout<<"\nEnter your selection: "<<std::endl;
std::cin>>selection;

if (selection=='1')
    std::cout<<"You chose 1 --- doing this"<<std::endl;
else if (selection=='2')
    std::cout<<"You chose 2 --- doing that"<<std::endl;
else if (selection=='3')
    std::cout<<"You chose 3 --- doing something else"<<std::endl;
else if (selection=='Q'||selection=='q')
    std::cout<<"You chose Q --- goodbye!"<<std::endl;
else
    std::cout<<"Invalid option ,please try again."<<std::endl;

}while (selection!='q'&&selection!='Q'); 

return 0;
}
