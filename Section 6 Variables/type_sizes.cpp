#include <climits>
#include <cfloat>
#include <iostream>
using namespace std;
//sizes fo data types in my machine
int main(){
    cout<<"sizeoff-number of bytes used to represent data types (in bits)"<<endl<<"====================================================="<<endl ;
    cout<<"character: "<<sizeof(char)<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"signed short int: "<<sizeof(signed short int)<<endl;
    cout<<"signed int: "<<sizeof(signed int)<<endl;
    cout<<"signed long int: "<<sizeof(signed long int)<<endl;
    cout<<"signed long long int: "<<sizeof(signed long long int)<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"float: "<<sizeof(float)<<endl;
    cout<<"double: "<<sizeof(double)<<endl;
    cout<<"long float: "<<sizeof(long double)<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"boolean: "<<sizeof(bool)<<endl;




    cout<<"climit min-max of data types"<<endl<<"====================================================="<<endl;
    cout<<"character: "<<CHAR_MIN<<"to"<<CHAR_MAX<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"int: "<<INT_MIN<<"to"<<INT_MAX<<endl;
    cout<<"short: "<<SHRT_MIN<<"to"<<SHRT_MAX<<endl;
    cout<<"long: "<<LONG_MIN<<"to"<<LONG_MAX<<endl;
    cout<<"long long: "<<LLONG_MIN<<"to"<<LLONG_MAX<<endl;
    cout<<"--------------------------------"<<endl;
 



   cout<<"sizeof variable name example"<<endl<<"====================================================="<<endl;
   int number {13};
   cout<<"int number {13}: "<<sizeof(number)<<endl;
   //the variable number is an int so it should return the same as sizeof(int)
    
    
    return 0;
}
