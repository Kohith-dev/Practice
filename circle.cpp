#include<iostream>
using namespace std;
int main(){
    double radius;
    double area;
    double pie = 3.14;

    cout<<"enter the radius";
    cin>>radius;
    area = pie * (radius * radius);
    cout<<"area of the circle is :"<<area;

    return 0;
}  