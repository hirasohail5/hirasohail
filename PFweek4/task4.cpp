#include<iostream>
using namespace std;
void add(float num1, float num2);
void sub(float num1, float num2);
void mul(float num1, float num2);
void divi(float num1, float num2);
main()
{
	float num1,num2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;
	if(op=='+')
	{
	add(num1,num2);
	}
	if(op=='-')
	{
	sub(num1,num2);
	}
	if(op=='*')
	{
	mul(num1,num2);
	}
	if(op=='/')
	{
	divi(num1,num2);
	}
}
void add(float num1, float num2)
{
	float sum;
	sum=num1+num2;
	cout<<"Addition: "<<sum;
}
void sub(float num1, float num2)
{
	float subtraction;
	subtraction=num1-num2;
	cout<<"Subtraction: "<<subtraction;
}
void mul(float num1, float num2)
{
	float multiplication;
	multiplication=num1*num2;
	cout<<"Multiplication: "<<multiplication;
}
void divi(float num1, float num2)
{
	float division;
	division=num1/num2;
	cout<<"Division: "<<division;
}