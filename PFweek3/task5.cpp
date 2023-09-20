#include <iostream>
using namespace std;
main( )
{
	string name;
	float matric,inter,ecat,aggregate,a,b,c;
	cout<<"Enter the student's name: ";
	cin>>name;
	cout<<"Enter matriculation marks (out of 1100): ";
	cin>>matric;
	cout<<"Enter intermediate marks (out of 510): ";
	cin>>inter;
	cout<<"Enter Ecat marks (out of 400): ";
	cin>>ecat;
	a= (matric/1100) * 10;
	b= (inter/510)*40;
	c=(ecat/400) * 50;
	aggregate = a+b+c;
	cout<<"Aggregate score for "<<name<<" in UET is: "<<aggregate<<"%";
}
	