#include <iostream>

int main(){
    bool wear_coat;
    const int wind_speed_forcoat {25} ;//above this wear coat
    const int temp_forcoat {45}; //below this ...

    int wind_speed;
    int temp;

    std::cout<<"wind speed: "<<std::endl;
    std::cin>>wind_speed;
    std::cout<<"temperature: "<<std::endl;
    std::cin>>temp;

    wear_coat=wind_speed>wind_speed_forcoat||temp<temp_forcoat;

    std::cout<<std::boolalpha;
    std::cout<<"wear coat: "<<wear_coat<<std::endl;

    return 0;
}