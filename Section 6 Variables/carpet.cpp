#include <iostream>
using namespace std;

int main(){
    cout<<"Welcome to Rita's carpet cleaning service \n\n";
    cout<<"How many rooms would you like cleaned? ";
    int rooms {0};
    cin>>rooms;
    const int cost_per_room {30};
    int cost {rooms*cost_per_room};
    double tax {cost * 0.06};
    double price {cost+tax};
    cout<<"The price for "<<rooms<<" rooms is "<<price<<"$"<<endl;
    
    return 0;
}