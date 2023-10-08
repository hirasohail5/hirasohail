#include<iostream>
using namespace std;
void evaluate(char ch);
main()
{
char ch;
cout<<"Enter a character (A/a): ";
cin>>ch;
evaluate(ch);
}
void evaluate(char ch)
{
if(ch=='a')
{
    cout<<"You have entered small "<<ch;
}
if(ch=='A')
{
    cout<<"You have entered Capital "<<ch;
}
}