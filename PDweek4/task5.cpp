#include<iostream>
using namespace std;
void cal(int position1,int position2);
main()
{
    int position1,position2;
    cout<<"Enter your position: ";
    cin>>position1;
    cout<<"Enter your friend's position: ";
    cin>>position2;
    cal(position1,position2);
}
void  cal(int position1,int position2)
{
if((position1+6)>position2)
{
    cout<<"true";

}
if((position1+6)<position2)
{
    cout<<"false";
}
}




