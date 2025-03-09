#include <iostream>
#include <vector>
#include <iomanip>

int main(){
    std::vector<double>nums;


    double num;
    char select;
    do{
    std::cout<<"Enter number: "<<std::endl;    
    std::cin>>num;
    nums.push_back(num);
    std::cout<<"Enter another?(y/n)"<<std::endl;
    std::cin>>select;
    }while(select=='y'||select=='Y');
    
    double sum;
    int ammount=0;
    for(auto i:nums){
        sum+=i;
        ammount+=1;
    }

    
    double average=sum/ammount;
    std::cout<<std::fixed<<std::setprecision(1);
    std::cout<<"The average of the numbers you entered is "<<average;

    return 0;
}
//needs while loop and i didnt learn it yet...
//TO BE CONTINUED