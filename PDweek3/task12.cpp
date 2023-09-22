#include<iostream>
using namespace std;
main()
{
	int paint,width,height,num;
	cout<<"Number of square meters you can paint: ";
	cin>>paint;
	cout<<"Width of the single wall (in meters): ";
	cin>>width;
	cout<<"Height of the single wall (in meters): ";
	cin>>height;
	num=paint/(width*height);
	cout<<"Number of walls you can paint: "<<num;
}