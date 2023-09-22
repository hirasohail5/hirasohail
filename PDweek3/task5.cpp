#include<iostream>
using namespace std;
main()
{
	float twl,days;
	string name;
	cout<<"Enter the Name of the Person: ";
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>>twl;
	days=twl*15;
	cout<<name<<" will need "<<days<<" days to lose "<<twl<< " kg of weight by following the doctor's suggestions";
}