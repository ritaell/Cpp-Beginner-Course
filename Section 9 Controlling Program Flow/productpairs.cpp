#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int>vec{1,2,3};
int result=0;

if (vec.empty()||vec.size()<2){
    result=0;
}
else{
for (int i=0;i<(vec.size()-1);i++){
    for(int j=i+1;j<(vec.size());j++)
    result+=vec[j]*vec[i];
}
cout<<result;    
}

return 0;
}
