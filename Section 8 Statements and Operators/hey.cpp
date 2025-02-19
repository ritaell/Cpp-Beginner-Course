#include <iostream>

int main(){
   std::string names[]{"Alex","Rita","John","Lois"};
   for (int i=0;i<sizeof(names)/sizeof(names[0]);++i){
    //std::cout<<sizeof(names)/sizeof(names[0]);
    std::cout<<"Hey, "<<names[i]<<"!\n";
   }

    return 0;
}