#include <iostream>
using namespace std;
void cal( float budget,float num,string category);
main()
{
    float budget,num;
    string category;
    cout<<"Enter the budget: ";
    cin>>budget;
    cout<<"Enter the category (VIP/Normal): ";
    cin>>category;
    cout<<"Enter the number of people in the group: ";
    cin>>num;
    cal(budget,num,category);
}
void cal( float budget,float num,string category)
{
    float result,price,rm;
    float transportationCost;
    if(category=="Normal")
    {
        price=(num*249.99);
    }
    if(category=="VIP")
    {
        price=budget-(num*499.99);
    }
    if (num >= 1 && num <= 4)
    {
        transportationCost = 0.75 * budget;
    } else if (num >= 5 && num <= 9)
    {
        transportationCost = 0.60 * budget;
    } else if (num >= 10 && num <= 24) 
    {
        transportationCost = 0.50 * budget;
    } else if (num >= 25 && num <= 49)
    {
        transportationCost = 0.40 * budget;
    } else 
    {
        transportationCost = 0.25 * budget;
    }
    result=transportationCost+price;
    if(result>budget)
    {
        rm=result-budget;
        cout<<"Not enough money! You need "<<rm<<" leva.";
    }
    if(result<budget)
    {
        rm=budget-result;
        cout<<"Yes! You have "<<rm<<" leva left.";
    }
    
    
}