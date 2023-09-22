#include<iostream>
using namespace std;
main()
{
	int atp,ctp,ats,cts,per,amount,donation,remainamount;
	string name;
	cout<<"Enter the movie name: ";
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	cin>>atp;
	cout<<"Enter the child ticket price: $";
	cin>>ctp;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>ats;
	cout<<"Enter the number of child tickets sold: ";
	cin>>cts;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>per;
	cout<<endl;
	amount=(atp*ats)+(ctp*cts);
	donation=amount/10;
	remainamount=amount-donation;
	cout<<"Movie: "<<name<<endl;
	cout<<"Total amount generated from ticket sales: $"<<amount<<endl;
	cout<<"Donation to charity (10%): $"<<donation<<endl;
	cout<<"Remaining amount after donation: $"<<remainamount;
}
	
	