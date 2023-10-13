#include<iostream>
using namespace std;
int cal(int num1 ,int num2);
main()
{
    int num1,num2,result;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    result=cal(num1,num2);
    cout<<result;

}
int cal(int num1 ,int num2)
{
    int result;
    if(num1>num2)
    {
      result=1;  
    }
    else
    {
        result=0;
    }
    return result;
}