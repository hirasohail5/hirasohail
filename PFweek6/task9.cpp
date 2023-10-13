#include<iostream>
using namespace std;
 string cal(int age,char ch);
main()
{
int age;
char ch;
string result;
cout<<"Enter your age: ";
cin>>age;
cout<<"Enter your gender (m/f): ";
cin>>ch;
result=cal(age,ch);
cout<<"Your personal title is: "<<result;
}
string cal(int age,char ch)
{   string result;
    if(age>=16 && ch=='m')
    {
        result="Mr.";
    }
    if(age<16 && ch=='m')
    {
        result="Master";
    }
    if(age>=16 && ch=='f')
    {
        result="Ms.";
    }
    if(age<16 && ch=='f')
    {
        result="Miss";
    }
    return result;
}
