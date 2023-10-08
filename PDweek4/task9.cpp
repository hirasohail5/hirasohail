#include<iostream>
using namespace std;
void cal(int people, int rolls,int sheets, int sheetsused,int days);
main()
{
	int people,rolls,sheets,sheetsused,days;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>rolls;
	cal(people,rolls,sheets,sheetsused,days);
}
void cal(int people,int rolls,int sheets,int sheetsused,int days)
{
	sheets=rolls*500;
	sheetsused=people*57;
	days=sheets/sheetsused;
if(days<14)
{
	cout<<"Your TP will only last "<<days<<" days, buy more!";
}
if(days>=14)
{
	cout<<"Your TP will last "<<days<<" days, no need to panic!";
}
}