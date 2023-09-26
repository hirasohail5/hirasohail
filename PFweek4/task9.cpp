#include<iostream>
using namespace std;

void cal1(double distance,double fuel);
main() 
{
double distance,fuel;
cout<<"Enter the distance: ";
cin>>distance;
cal1( distance, fuel);
}

void cal1(double distance,double fuel)
{
if(distance<10)
{
cout<<"Fuel needed: 100";
}
if(distance>10)
{
fuel=distance*10;
cout<<"Fuel needed: "<<fuel;
}
}