#include<iostream>
using namespace std;
float cal(string day,string month,float amount);
main()
{
    string day,month;
    float amount,result;
    cout<<"Enter Purchase Day: ";
    cin>>day;
    cout<<"Enter Purchase Month: ";
    cin>>month;
    cout<<"Enter Purchase Amount: ";
    cin>>amount;
    result=cal(day,month,amount);
    cout<<"Payable Amount after discount: "<<result;
}
float cal(string day,string month,float amount)
{
    float result=amount;
    if(day=="Sunday"&&(month=="March"|| month=="October" || month=="August"))
    {
        result=amount-(0.1*amount);
    }
    
    return result;
}
