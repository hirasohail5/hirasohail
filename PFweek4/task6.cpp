#include<iostream>
using namespace std;
void a(float score)
{
	if(score>50)
	
	cout<<"Pass";
	if(score>=50)
	
	cout<<"Fail";
}


main()
{
	float score;
	cout<<"Enter your score: ";
	cin>>score;
	
	a(score);
}
