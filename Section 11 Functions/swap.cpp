//this is a program that swaps the values of two integers i made in order to practice pass by refference

#include <iostream>

void swap(int &a, int &b);

int main(){
    int a = 100;
    int b=300;
    std::cout<<"a="<<a<<" b="<<b<<std::endl;
    swap(a,b);
    std::cout<<"a="<<a<<" b="<<b<<std::endl;
    return 0;
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

