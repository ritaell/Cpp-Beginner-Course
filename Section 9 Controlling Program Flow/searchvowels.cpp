#include <iostream>
#include <vector>
using namespace std;
int main(){
    std::vector <char> vec{'f','h','a','g','u'};
    int i=0;
    bool vow_found=false;
    do{
        switch (vec[i]){
            case 'a':cout<<"Vowel found: a";vow_found=true;break;
            case 'e':cout<<"Vowel found: e";vow_found=true;break;
            case 'i':cout<<"Vowel found: i";vow_found=true;break;
            case 'o':cout<<"Vowel found: o";vow_found=true;break;
            case 'u':cout<<"Vowel found: u";vow_found=true;break;
        } 
         i++;
    }while(!vow_found);
    if (!vow_found)
        cout<<"No vowel was found";
}