#include <iostream>
using namespace std;

//This program calculates the area of a room
int main(){
    int width;
    int length;
    int area;

    cout<<"Width: ";
    cin>>width;

    cout<<"Length: ";
    cin>>length;

    area=length*width;
    cout<<"The area of the room is "<<area<<endl;
    
    return 0;
}