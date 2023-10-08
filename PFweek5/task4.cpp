#include<iostream>
#include<cmath>
using namespace std;
float cal(float distance, float angle);
main()
{
    float distance,angle,result;
    cout<<"Enter the distance from the base of the tree (in feet): ";
    cin>>distance;
    cout<<"Enter the angle of elevation (in degrees): ";
    cin>>angle;
    result=cal(distance,angle);
    cout<<"The height of the tree is: "<<result<<" feet";
}
float cal(float distance,float angle)
{
float radian=57.2958;
float height;
float a,b,c;
a=angle*(1/radian);
b=tan(a);
height=b*distance;
return height;
}