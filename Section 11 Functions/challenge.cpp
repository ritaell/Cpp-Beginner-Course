#include <iostream>
#include <vector>
#include <string>

void menu();
void print(const std::vector<int>& list);
void add(std::vector<int>& list);
double mean(std::vector<int>& list);
int small(std::vector<int>& list);
int large(std::vector<int>& list);

int main() {
    std::vector<int> list{10,5,2};
    char selection {};

    while (selection != 'q' && selection != 'Q') { 
        menu();

        std::cin >> selection; 

        if (selection == 'p' || selection == 'P') {
            print(list);
        }
        if (selection=='a'||selection=='A'){
            add(list);
        }
        if (selection=='m'||selection=='M'){
           std::cout<<mean(list)<<std::endl;
        }
        if (selection=='s'||selection=='S'){
            if (small(list)==0)
                std::cout<<"List is empty"<<std::endl;
            else
                std::cout<<small(list)<<std::endl;
        }
        if (selection=='l'||selection=='L'){
            if (small(list)==0)
                std::cout<<"List is empty"<<std::endl;
            else
                std::cout<<large(list)<<std::endl;
        }

    }

    return 0;
}

void menu() {
    std::cout << "\nP- Print numbers" << std::endl;
    std::cout << "A- Add numbers" << std::endl;
    std::cout << "M- Display mean of numbers" << std::endl;
    std::cout << "S- Display smallest number" << std::endl;
    std::cout << "L- Display largest number" << std::endl;
    std::cout << "Q- Quit" << std::endl;
}

void print(const std::vector<int>& list) {  
    std::cout << std::endl;
    if (list.empty()){
        std::cout<<"List is empty"<<std::endl;
    }
    else{
      for (int i : list) {
        std::cout << i << " ";
        }
        std::cout << std::endl;  
    }
    
}

void add(std::vector<int>& list){
    int num;
    std::cout<<"Add an element to the list: "<<std::endl;
    std::cin>>num;
    list.push_back(num);
}

double mean(std::vector<int>& list){
    int sum{0};
    int size{0};
    for (int i:list){
        sum+=i;
        size+=1;
    }
    return sum/size;
}


int small(std::vector<int>& list){
    if (list.empty()){
        return 0;
    }
        
    int small=list[0];
    for (int i:list){
      if (small>i)
        small=i;
    }
    return small;
}

int large(std::vector<int>& list){
    if (list.empty()){
        return 0;
    }
        
    int large=list[0];
    for (int i:list){
      if (large<i)
        large=i;
    }
    return large;
}
