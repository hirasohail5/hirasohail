#include<iostream>
using namespace std;
float cal(string screen,int r,int c);
main()
{
    string screen;
    int r, c;
    float result;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>screen;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    result=cal( screen, r,c);
    cout<<result;
}
float cal(string screen,int r,int c)
{
    float result;
    
    if(screen=="Premiere")
    {
        result=r*c*12.00;
    }
    if(screen=="Normal")
    {
        result=r*c*7.50;
    }
    if(screen=="Discount")
    {
        result=r*c*5.00;
    }
    return result;
}