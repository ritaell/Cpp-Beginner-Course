#include <iostream>
using namespace std;

int main(){
    
// int counter =10;
// int result=0;
// cout<<"Counter: "<<counter<<endl;    
// result=++counter +10;
// cout<<"Counter: "<<counter<<endl;
// cout<<"Result: "<<result<<endl;

int counter =10;
int result=0;
cout<<"Counter: "<<counter<<endl;    
result=counter++ +10;//ΠΡΩΤΑ ΚΑΝΕΙ STORE COUNTER+10 ΣΤΟ RESULT KAI META STO COUNTER ΠΡΟΣΘΕΤΕΙ 1
cout<<"Counter: "<<counter<<endl;
cout<<"Result: "<<result<<endl;


return 0;
}
