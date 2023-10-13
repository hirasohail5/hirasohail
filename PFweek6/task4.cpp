#include<iostream>
using namespace std;
int cal(int num1,int num2,int num3);
main()
{
    int num1,num2,num3,result;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;
    result=cal(num1,num2,num3);
    cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<result;

}
int cal(int num1,int num2,int num3)
{
    int result;
    if(num1>num2)
    {
        if(num1>num3)
        {result=num1;}
        else
        {result=num3;}
    }
    else{
        if(num2>num3)
        {
            result=num2;
        }
        else{
            result=num3;
        }
    }
    return result;
}    
    

