#include<iostream>
using namespace std;
void cal(int hour,int min);
main()
{
int hour,min;
cout<<"Enter Hours: ";
cin>>hour;
cout<<"Enter Minutes: ";
cin>>min;
cal(hour,min);
}
void cal(int hour,int min)
{
  int con,res,a,b;
  con=(hour*60)+min;
  res=con+15;
  a=res/60;
  b=res%60;
  cout<<a<<":"<<b;

}