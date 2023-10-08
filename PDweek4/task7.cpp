#include<iostream>
using namespace std;
void flowerShop(float redRose, float whiteRose, float tulip,float d);
main()
{
	float a,b,c,d;
	cout<<"Red Rose: ";
	cin>>a;
    	cout<<"White Rose: ";
	cin>>b;
	cout<<"Tulips: ";
	cin>>c;
	flowerShop(a,b,c,d);
}
void flowerShop(float redRose, float whiteRose, float tulip,float d)
{
	d=(redRose*2.00)+(whiteRose*4.10) +(tulip*2.50);
	cout<<"Original Price: $"<<d<<endl;
if(d>200)
{
	cout<<"Price after Discount: $"<<d-(0.2*d)<<endl;
}
if(d<200)
{
	cout<<"No discount applied.";
}
}	
