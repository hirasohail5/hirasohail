#include<iostream>
using namespace std;
void cal();
main()
{
  cal();
}
void  cal()
{
float inches ,foot;
cout<<"Enter the measurement in inches: ";
cin>>inches;
foot=inches/12;
cout<<"Equivalent in feet: "<<foot;
}