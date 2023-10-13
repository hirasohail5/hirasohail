#include<iostream>
using namespace std;
float cal(char ch,float num);
main()
{
    char ch;
    float num,result;
    
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>ch;
    cout<<"Enter the value: ";
    cin>>num;
    result=cal(ch,num);
    cout<<"The perimeter is: "<<result;
}
float cal(char ch,float num)
{
float result;
if(ch=='s')
{
    result=4*num;
}
if(ch=='c')
{
    result=6.28*num;
}
if(ch=='t')
{
    result=3*num;
}
if(ch=='h')
{
    result=6*num;
}
return result;

}