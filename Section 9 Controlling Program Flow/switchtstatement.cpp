#include <iostream>
using namespace std;

int main(){
    char letter;
    cout<<"What grade do you expect, in letters: ";
    cin>>letter;

    switch (letter){
        case 'a':
        case 'A':
        cout<<"You need 90 or above!"<<endl;
        break;

        case 'b':
        case 'B':
        cout<<"You need 80-89"<<endl;
        break;

        case 'c':
        case 'C':
        cout<<"You need 70-79"<<endl;
        break;

        case 'd':
        case 'D':
        cout<<"You need 60-69"<<endl;
        break;

        case 'f':
        case 'F':
        char confirm;
        cout<<"Are you sure you want an F? (y/n)"<<endl;
        cin>>confirm;
        if (confirm=='y'||confirm=='Y')
            cout<<"You need 50-59"<<endl;
        else if (confirm=='n'||confirm=='N')
            cout<<"Go study then."<<endl;
        else
            cout<<"Input not valid "<<endl;
        break;

        default:
        cout<<"Sorry input not valid, try again!"<<endl;



    }
    return 0;
}