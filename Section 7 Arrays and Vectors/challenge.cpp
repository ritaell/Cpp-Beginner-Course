#include <vector>
#include <iostream>
using namespace std;

int main(){
vector<int>vector1;
vector<int>vector2;

vector1.push_back(10);    
vector1.push_back(20);
cout<<"elements of vector1\n"<<vector1.at(0)<<endl<<vector1.at(1)<<endl;
cout<<"size of vector 1\n"<<vector1.size()<<endl;
cout<<"+++++++++++++++++++++++"<<endl;
vector2.push_back(100);
vector2.push_back(200);
cout<<"elements of vector2\n"<<vector2.at(0)<<endl<<vector2.at(1)<<endl;
cout<<"size of vector 2\n"<<vector2.size()<<endl;
cout<<"+++++++++++++++++++++++"<<endl;
vector<vector<int>>vector_2d;

vector_2d.push_back(vector1);
vector_2d.push_back(vector2);

cout<<vector_2d.at(0).at(0)<<endl;
cout<<vector_2d.at(0).at(1)<<endl;
cout<<vector_2d.at(1).at(0)<<endl;
cout<<vector_2d.at(1).at(1)<<endl;

vector1.at(0)=1000;
cout<<"+++++++++++++++++++++++"<<endl;
cout<<vector_2d.at(0).at(0)<<endl;
cout<<vector_2d.at(0).at(1)<<endl;
cout<<vector_2d.at(1).at(0)<<endl;
cout<<vector_2d.at(1).at(1)<<endl;
cout<<"+++++++++++++++++++++++"<<endl;
cout<<vector1.at(0)<<endl;
cout<<vector1.at(1)<<endl;
cout<<vector1.size()<<endl;
return 0;
}
