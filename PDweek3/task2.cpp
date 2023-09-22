#include <iostream>
using namespace std;
main()
{ 
	int minutes,fps,result;
	cout<<"Number of Minutes: ";
	cin>>minutes;
	cout<<"Frames per Second: ";
	cin>>fps;
	result= (fps*60)*minutes;
	cout<<"Total Number of Frames: "<<result;
}