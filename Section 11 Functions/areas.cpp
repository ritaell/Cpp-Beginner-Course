#include <iostream>
//function prototypes
double square_area(double side);
double triangle_area(double height,double base);
double rectangle_area(double height,double base);
double circle_area(double r);
void square();
void triangle();
void rectangle();
void circle();

int main(){
    square();
    triangle();
    rectangle();
    circle();
    return 0;
}
void square(){
    double side;
    std::cout<<"Side of the square: "<<std::endl;
    std::cin>>side;
    std::cout<<"area: "<<square_area(side)<<std::endl;
}
void triangle(){
    double height;
    double base;
    std::cout<<"Enter height of triangle: "<<std::endl;
    std::cin>>height;
    std::cout<<"Enter base of triangle: "<<std::endl;
    std::cin>>base;
    std::cout<<"area: "<<triangle_area(height,base)<<std::endl;
}
void rectangle(){
    double height;
    double base;
    std::cout<<"Enter height of rectangle: "<<std::endl;
    std::cin>>height;
    std::cout<<"Enter base of rectangle: "<<std::endl;
    std::cin>>base;
    std::cout<<"area: "<<rectangle_area(height,base)<<std::endl;
}
void circle(){
double r;
std::cout<<"Enter radious of circle: "<<std::endl;
std::cin>>r;
std::cout<<"area: "<<circle_area(r)<<std::endl;
}


double square_area(double side){
return side*side;
}

double triangle_area(double height,double base){
    return height*base/2;
}

double rectangle_area(double height,double base){
    return height*base;
}

double circle_area(double r){
    const double pi=3.14;
    return pi * r * r;
}