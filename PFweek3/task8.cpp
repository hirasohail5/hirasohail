#include <iostream>
using namespace std;
main()
{ 
 	float voltage,current,power;
	cout<<"Enter voltage (in volts):";
	cin >> voltage;
	cout <<"Enter current (in amperes):";
	cin >> current;
	power = voltage * current;
	cout <<"The power is "<< power<< " watts.";
}