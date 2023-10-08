#include<iostream>
#include<cmath>
using namespace std;
main()
{
    float number1,number2,minimum;
    cout<<"Enter the first number: ";
    cin>>number1;
    cout<<"Enter the second number: ";
    cin>>number2;
    minimum=min(number1,number2);
    cout<<"The minimum of "<<number1<<" and "<<number2<<" is: "<<minimum;
    

}
