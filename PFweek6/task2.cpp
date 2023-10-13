#include<iostream>
using namespace std;
bool cal(int num);
main()
{
    int num;
    cout<<"Enter a 3-digit number: ";
    cin>>num;
    bool result=cal(num);
    cout<<result;
}
bool cal(int num)
{
    int q1,q2,q3,r1,r2,r3,result,sum;
    q1=num/10;
    r1=num%10;
    q2=q1/10;
    r2=q1%10;
    q3=q2/10;
    r3=q2%10;
    sum=r1+r2+r3;
    
    if((num%2==0 && sum%2==0)||(num%2==1 && sum%2==1))
    {
        return true;
    }
    else{
        return false;
    }
}