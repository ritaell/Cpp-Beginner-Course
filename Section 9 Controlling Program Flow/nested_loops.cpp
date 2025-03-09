#include <iostream>
#include <vector>

int main(){
    //displays all timestables from 1 to 10
    // for (int i{1};i<=10;i++){//outer loop
    //     std::cout<<i<<" timestable"<<"\n------------------------"<<std::endl;
    //     for (int j{1};j<=10;j++){//inner loop
    //     std::cout<<i<<"*" <<j<<"="<<i*j<<std::endl;   
    //     }
    //     //in each outer loops itteration inner loop itterates 10 times
    // }

    //displays 2d vector
    std::vector<std::vector<int>>vec2d{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (auto vec:vec2d){//for each vector inside the 2d vector(row)
        for (auto j:vec){//itterates each row
            std::cout<<" "<<j<<" ";
        }
    std::cout<<std::endl;    
    }
    
    return 0;
}