#include<iostream>
using namespace std;
void cal();
main()
{
     cal();

}
void cal()
{
float distance,fuel;
cout<<"Enter the distance: ";
cin>>distance;
fuel=distance*10;
cout<<"Fuel needed: "<<fuel;
}