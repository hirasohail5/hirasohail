#include<iostream>
using namespace std;
main()
{
	int num,q1,q2,q3,q4,r1,r2,r3,r4,result;
	cout<<"Enter a 4-digit number: ";
	cin>>num;
	q1=num/10;
	r1=num%10;
	q2=q1/10;
	r2=q1%10;
	q3=q2/10;
	r3=q2%10;
	q4=q3/10;
	r4=q3%10;
	result=r1+r2+r3+r4;
	cout<<"Sum of the individual digits: "<<result;
}