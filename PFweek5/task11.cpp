#include<iostream>
using namespace std;
void calc(int v,int p1,int p2,float hour);
main()
{
int v,p1,p2;
float hour;
cout<<"Enter volume of the pool in liters: ";
cin>>v;
cout<<"Enter flow rate of the first pipe per hour: ";
cin>>p1;
cout<<"Enter flow rate of the second pipe per hour: ";
cin>>p2;
cout<<"Enter hours that the worker is absent: ";
cin>>hour;
calc(v,p1,p2,hour);
}
void calc(int v,int p1,int p2,float hour)
{
    float totalwater;
 totalwater=(p1+p2)*hour;
 if(totalwater<=v)
 {
 int p1per=(p1*hour*100)/totalwater;   
 int p2per=(p2*hour*100)/totalwater;   
 int totalper=(totalwater*100)/v;
 cout<<"The pool is "<<totalper<<"% full. Pipe 1: "<<p1per<<"%. Pipe 2: "<<p2per<<"%.";
 }
if(totalwater>=v) 
{
   float overflow=totalwater-v;
    cout<<"For "<<hour<<" hours, the pool overflows with "<<overflow<<" liters.";
}

 

}