#include<iostream>
using namespace std;
void a(string day,int amount);
main()
{
string day;
int amount;
cout<<"Enter the day of purchase: ";
cin>>day;
cout<<"Enter the total purchase amount: $";
cin>>amount;
a(day,amount);
}

void a(string day,int amount)
{
if(day!="Sunday")
{
cout<<"Payable Amount: $"<<amount;
}
if(day=="Sunday")
{
cout<<"Payable Amount: $"<<amount-(0.1*amount);
}
}