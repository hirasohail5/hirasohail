#include<iostream>
using namespace std;
void a(int age)
{
	if(age>=18)
	cout<<"You are eligible to vote.";
	if(age<18)
	cout<<"You are not eligible to vote.";
}


main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	a(age);
}
