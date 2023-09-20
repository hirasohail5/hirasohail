#include <iostream>
using namespace std;
main( )
{
	int birth,population,a;
	cout<<"Enter the current world population:";
	cin>>population;
	cout<<"Enter the monthly birth rate (number of births per month):";
	cin>>birth;
	a=(birth*12*30)+population;
	cout<<"The population in three decades will be:"<<a;
}