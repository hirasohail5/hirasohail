#include<iostream>
using namespace std;
float cal(char ch,float price);
main()
{
    char ch;
    float price;
    float result;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>ch;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    result=cal(ch,price);
    cout<<"The final price of a vehicle of type "<<ch<<" after adding the tax is $"<<result<<".";


}
float cal(char ch,float price)
{
    float result,tax;
    if(ch=='M')
    {
    tax=price*(6/100.0);
    }
    if(ch=='E')
    {
    tax=price*(8/100.0);
    
    }
    if(ch=='S')
    {
    tax=price*(10/100.0);
    
    }
    if(ch=='V')
    {
    tax=price*(12/100.0);
    
    }
    if (ch=='T')
    {
      tax=price*(15/100.0);
      
    }
    result=price + tax;
    return result;
}
