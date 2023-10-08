#include<iostream>
using namespace std;
void pet (int holidays);
main()
{
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}
void pet (int holidays)
{
	int wd,tg,hours;
	float minutes,dif;
	wd=365-holidays;

	tg=(wd*63)+(holidays*127);
	dif=30000-tg;
	if (dif>0)
{
	hours=dif/60;
	minutes=((dif/60)-hours)*60;
	cout<<"Tom sleeps well"<<endl;
	cout<<hours<<" hours and "<<minutes<<" minutes less for play";
}
	if (dif<0)
{
	hours=(-1*dif/60);
	
	minutes=((-1*dif/60)-hours)*60;
	cout<<"Tom will run away"<<endl;
	cout<<(hours)<<" hours and "<<(minutes)<<" minutes for play";
}
}