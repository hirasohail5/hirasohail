#include<iostream>
using namespace std;
void cal( int hours,int minutes);
main()
{
int hours,minutes;
cout<<"Enter the number of hours: ";
cin>>hours;
cout<<"Enter the number of minutes: ";
cin>>minutes;
cal(hours,minutes);
}
void cal( int hours,int minutes)
{
int result;
result=hours*60;

if(result>minutes)
{
cout<<hours<<endl;
}

if(result<minutes)
{
cout<<minutes;
}

}