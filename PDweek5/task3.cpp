#include<iostream>
using namespace std;
void cal(float hour,float days,float workers);
main()
{
float hour,days,workers;
float result;
cout<<"Enter the needed hours: ";
cin>>hour;
cout<<"Enter the days that the firm has: ";
cin>>days;
cout<<"Enter the number of all workers: ";
cin>>workers;
cal(hour,days,workers);

}
void cal(float hour,float days,float workers)
{
    float day;
    float hours;
    float result;
    day=days-(days*(10/100.0));
    hours=workers*day*10;
    if (hours<hour)
    {
        result=hour-hours;
        cout<<"Not enough time! "<<result<<" hours needed.";
    }
    if(hours>hour)
    {
            result=hours-hour;
            cout<<"Yes!"<<result<< " hours left.";

    }
}