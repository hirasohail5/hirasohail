#include<iostream>

using namespace std;
void cal(string a);
main()
{
string a;
cout<<"Enter 'true' or 'false': ";
cin>>a;
cal(a);
}
void cal(string a)
{
if(a=="true")
{
cout<<"false"<<endl;
}
if(a=="false")
{
cout<<"true"<<endl;
}
}