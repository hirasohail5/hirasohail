#include<iostream>
using namespace std;
float cal(int dis, string period);
main()
{
    int dis;
    string period;
    float result;
    cout<<"Enter the number of kilometers: ";
    cin>>dis;
    cout<<"Enter the period of the day (day/night): ";
    cin>>period;
    result=cal(dis,period);
    cout<<"Lowest price for "<<dis<<" kilometers: "<<result<<" EUR";

}
float cal(int dis, string period)
{
    float result,n;
    if (dis<20)
    {
     if(period=="day")
    
     {
        n=0.79*dis;
      
        result= 0.70 + n;
     }
    
     if (period=="night")
     {
        n=0.90*dis;
       result= 0.70 + n; 
     }
    }
    if (dis>=20)
    {
        result= (dis*0.09);
    }
    if (dis>=100)
    {
        result= (dis*0.06);
    }
    return result;
}