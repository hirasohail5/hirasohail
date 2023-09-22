#include<iostream>
using namespace std;
main()
{
	int size,cost,sqf,fpp,fps;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>>size;
	cout<<"Enter the cost of the bag: $";
	cin>>cost;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>sqf;
	fpp=cost/size;
	fps=cost/sqf;
	cout<<"Cost of fertilizer per pound: $"<<fpp<<endl;
	cout<<"Cost of fertilizing per square foot: $"<<fps <<endl;
}
