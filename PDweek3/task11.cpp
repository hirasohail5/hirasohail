#include<iostream>
using namespace std;
main()
{
	int age,num,year,result;
	cout<<"Enter the person's age: ";
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	cin>>num;
	result=age/(num+1);
	cout<<"Average number of years lived in the same house: "<<result;
}