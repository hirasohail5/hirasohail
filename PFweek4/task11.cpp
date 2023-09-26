#include<iostream>
using namespace std;
void cal(string name);
main()
{
while(true)
{
string name;
cout<<"Enter your name: ";
cin>>name;
cal(name);
}
}

void cal(string name)
{
cout<<name<<endl;
}