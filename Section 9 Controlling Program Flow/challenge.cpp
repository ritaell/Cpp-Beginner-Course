#include <iostream>
#include <vector>
#include <iomanip>

int main(){
    char selection;
    std::vector<int>nums;
    do{
        std::cout<<"\nP- Print numbers"<<std::endl;
        std::cout<<"A- Add numbers"<<std::endl;
        std::cout<<"M- Display mean of numbers"<<std::endl;
        std::cout<<"S- Display smallest number"<<std::endl;
        std::cout<<"L- Display largest number"<<std::endl;
        std::cout<<"Q- Quit"<<std::endl;

        std::cout<<"\nEnter your selection"<<std::endl;
        std::cin>>selection;

        if (selection=='P'||selection=='p'){
            if (nums.empty()){
                std::cout<<"[]-the list is empty"<<std::endl;
            }
            else{
            std::cout<<"[";
            for (int i:nums){
                std::cout<<i<<" ";
            }
            std::cout<<"]";    
            }
            
            
        }
        else if (selection=='A'||selection=='a'){
            int num;
            std::cout<<"Enter number: "<<std::endl;
            std::cin>>num;
            nums.push_back(num);
            std::cout<<num<<" added successfully!"<<std::endl;
        }
        else if (selection=='M'||selection=='m'){
            double sum=0;
            double ammount=nums.size();
            std::cout<<std::fixed<<std::setprecision(2)<<std::endl;
            if (nums.empty()){
                std::cout<<"list is empty, please insert something and try again"<<std::endl;
            }
            else{
            for (int i:nums){
                //std::cout<<i;
                sum+=i;
            }
            double mean=sum/ammount;
            std::cout<<mean<<std::endl;  
            }
            
        }
        else if (selection=='S'||selection=='s'){
            int small=0;
            if (nums.empty()){
                std::cout<<"list is empty, please insert something and try again"<<std::endl;
            }
            else{
                //1 2 3
            for (int i=0;i<(nums.size()-1);i++){
                for(int j=i+1;j<(nums.size());j++){
                    if (nums[j]<nums[i]&&nums[j]<small){
                    small=nums[j];
                    // std::cout<<nums[j]<<"<"<<nums[i]<<std::endl;
                    // std::cout<<"small"<<small<<std::endl;    
                    }
                        
                    else{
                    small=nums[i];
                    // std::cout<<nums[i]<<"<"<<nums[j]<<std::endl;
                    // std::cout<<"small"<<small<<std::endl;    
                    }
                        
                }
            }
            std::cout<<small<<std::endl;
            }
        }
        else if (selection=='L'||selection=='l'){
            int large=0;
            if (nums.empty()){
                std::cout<<"list is empty, please insert something and try again"<<std::endl;
            }
            else{
                
            for (int i=0;i<(nums.size()-1);i++){
                for(int j=i+1;j<(nums.size());j++){
                    if (nums[j]>nums[i]&&nums[j]>large){
                        large=nums[j];
                        // std::cout<<j<<">"<<i<<std::endl;
                        // std::cout<<"large"<<large<<std::endl;
                    }   
                    else{
                       large=nums[i];
                    //    std::cout<<i<<">"<<j<<std::endl;
                    //    std::cout<<"large"<<large<<std::endl; 
                    }
                        
                }
            }
            std::cout<<large<<std::endl;
            }
        }
    else if(selection=='q'||selection=='Q'){
        std::cout<<"Goodbye!"<<std::endl;
    }
    }while(selection!='q'&&selection!='Q');
}