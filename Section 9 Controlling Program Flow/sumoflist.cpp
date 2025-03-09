#include <iostream>

int main(){
    int nums [] {10,20,7,2,5};
    int sum;
    for (int i:nums){
        sum+=i;
    }
    std::cout<<sum<<std::endl;
    return 0;
}