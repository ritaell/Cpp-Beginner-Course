#include <iostream>
using namespace std;

int main(){
    cout<<"Welcome to Rita's carpet cleaning service\n\n";
    cout<<"small room:25$\nlange room:35$\ntax:6%\n\n";
    const int sroom {25};
    const int broom {35};
    const double tax_rate {6.0/100.0};
    
    cout<<"How many small rooms would you like cleaned? ";
    int srooms;
    cin>>srooms;

    cout<<"How many big rooms would you like cleaned? ";
    int brooms;
    cin>>brooms;
    
    int total {srooms*sroom+brooms*broom};
    cout<<"====================================================="<<endl;    
    cout<<"Price: "<<total<<"$"<<endl;
    double tax {total*tax_rate};
    cout<<"Tax: "<<tax<<"$"<<endl;
    cout<<"Total: "<<total+tax<<"$"<<endl;


    return 0;
}