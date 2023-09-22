#include<iostream>
using namespace std;
main()
{
	float v,f,pv,pf,result,b,ruppees=1.94;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>pv;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>pf;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>v;
	cout<<"Enter total kilograms of fruits: ";
	cin>>f;
	b=(pv*v) +(pf*f);
	result=b/ruppees;
	cout<<"Total earnings in Rupees (Rps): "<<result;
}
	