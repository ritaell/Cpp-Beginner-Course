#include <iostream>

int main(){
    int scores [] {100,95,80};
    int *scores_ptr {scores};

    std::cout<<scores[1]<<std::endl;//array subscript notation
    std::cout<<scores_ptr[1]<<std::endl;//pointer subscript notation
    std::cout<<*(scores+1)<<std::endl;//array offset notation
    std::cout<<*(scores_ptr+1)<<std::endl;//pointer offset notation
    return 0;
}