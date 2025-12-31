#include <iostream>
#include <vector>

int main(){
    /*
    int score = 100;
    int *score_ptr = &score;
    std::cout<<score_ptr<<std::endl; //score pointer(location)
    std::cout<<*score_ptr<<std::endl; //dereferencing pointer (value)
    *score_ptr = 200;
    std::cout<<*score_ptr<<std::endl;
    std::cout<<score<<std::endl;
    return 0;
    */
    

    std::vector<std::string>names{"John","Larry","Harry"};
    std::vector<std::string>*names_ptr{&names};
    std::cout<<"first name: "<<(*names_ptr).at(0)<<std::endl; 
    std::cout<<"Names: "<<std::endl;
    for (auto i: *names_ptr){
        std::cout<<i<<std::endl;
    }
}