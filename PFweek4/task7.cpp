#include<iostream>
using namespace std;
void cal(int num)
{
	if(num%2==0)
	{
	cout<<"Number "<<num<<" is even";
	}
	if(num%2!=0)
	{
	cout<<"Number "<<num<<" is even";
	}
}
main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	cal(num);

}
