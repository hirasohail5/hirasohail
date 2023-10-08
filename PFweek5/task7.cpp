#include<iostream>
using namespace std;
void cal(int number);
main()
{
    int number;
    cout<<"Enter a three-digit number: ";
    cin>>number;
    cal(number);
}
void cal(int number)
{
    int q1,q2,q3,r1,r2,r3;
    q1=number/10;
    r1=number%10;
    q2=q1/10;
    r2=q1%10;
    q3=q2/10;
    r3=q2%10;
    if(r1==r3)
    {
        cout<<"The number is symmetrical.";
    
    }
    if(r1!=r3)
    {
        cout<<"The number is not symmetrical.";
    }
}
