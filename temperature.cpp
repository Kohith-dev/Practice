#include<iostream>
using namespace std;
int main(){
    double fahren;
    double celsius;

    cout<<"enter the fahrenheit degree value :";
    cin>>fahren;
    celsius =(fahren - 32.0)*(5.0/9.0);
    cout<<"celsius value is :"<< celsius;

    return 0;
}  