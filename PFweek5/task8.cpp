#include<iostream>
using namespace std;
void cal(int num);
main()
{
int num;
cout<<"Enter a five-digit number: ";
cin>>num;
cal(num);

}
void cal(int num)
{
int add,q1,q2,q3,q4,q5,r1,r2,r3,r4,r5;
q1=num/10;
r1=num%10;
q2=q1/10;
r2=q1%10;
q3=q2/10;
r3=q2%10;
q4=q3/10;
r4=q3%10;
q5=q4/10;
r5=q4%10;
add=r1+r2+r3+r4+r5;
if(add%2==0)
{
cout<<"Evenish";
}
if(add%2!=0)
{
cout<<"Oddish";
}
}
