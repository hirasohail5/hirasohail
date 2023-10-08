#include<iostream>
using namespace std;

void cal( float price ,string name);

main()
{
	float price;
	string name;
	
	cout<<"Enter the country's name: ";
	cin>>name;
	cout<<"Enter the ticket price in dollars: $";
	cin>>price;
	cal(price,name);
}

void cal( float price ,string name)
{
if(name=="Pakistan")
{
	cout<<"Final ticket price after discount: $"<<price-(0.05*price);
}
if(name=="Ireland")
{
	cout<<"Final ticket price after discount: $"<<price-(0.1*price);
}
if(name=="India")
{
	cout<<"Final ticket price after discount: $"<<price-(0.2*price);
}
if(name=="England")
{
	cout<<"Final ticket price after discount: $"<<price-(0.3*price);
}
if(name=="Canada")
{
	cout<<"Final ticket price after discount: $"<<price-(0.45*price);
}
}