#include <vector>
#include <iostream>

int main(){
    std::vector <std::vector<int>> grades//2d vector
    {
        {19,15,20},
        {13,17,9},
        {20,14,18}
    };

    std::cout<<"Grade of 2nd row, 1st column is: "<<grades.at(1).at(0)<<std::endl;
    std::cout<<"Grade of 3nd row, 2nd column is: "<<grades[2][1]<<std::endl;

    return 0;
}



