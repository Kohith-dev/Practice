#include<iostream>

int main(){
    double sales = 1000;
    double state_tax;
    double  country_tax;
    double total_tax;

    state_tax = (4.0/100)*1000;
    country_tax = (2.0/100)*1000;
    total_tax = (6.0/100)*1000;
    
    std::cout <<"sales :"<<sales;
    std::cout<<"state_tax :"<<state_tax;
    std::cout<<"country_tax :"<<country_tax;
    std::cout<<"total_tax :"<<total_tax;

    return 0;
}