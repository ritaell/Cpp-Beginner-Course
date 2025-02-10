#include <iostream>

int main(){
    int volume;
    int x,y,z;
    std::cout<<"Enter package length, width and height sepperater by spaces in cm"<<std::endl;
    std::cin>>x>>y>>z;

    const double maxdimensions=10;
    if (x>maxdimensions||y>maxdimensions||z>maxdimensions){
        std::cout<<"Package is too big"<<std::endl;
    }
    else{
        int volume=x*y*z;
        
        double cost;
        const float basecost{2.5};
        const float midshipping{0.1};
        const float bigshipping{0.25};
        const float midvolume {100};
        const float maxvolume{500};
        if (volume<midvolume){
            std::cout<<"shipping cost is: "<<basecost<<"$"<<std::endl;
        }
        else if(volume>=midvolume && volume<maxvolume){
            std::cout<<"shipping cost is: "<<volume*midshipping<<"$"<<std::endl;
        }
        else{
            std::cout<<"shipping cost is: "<<volume*bigshipping<< "$"<<std::endl;
    }
    }
    


 
    return 0;
}