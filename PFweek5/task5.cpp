#include<iostream>
#include<cmath>
using namespace std;
float cal(float a , float b, float c);
main()
{
    float a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    cal( a,b, c);
    
}

float cal(float a , float b, float c)
{
    float discri;
float d,e,f;
    float root1,root2,root;
    discri=pow(b,2)- (4*a*c);
	
    if(discri>0)
    {
    root1=((-b + (sqrt(discri)))/ (2*a));
    root2=((-b - (sqrt(discri)))/ (2*a));
    cout<<"Solutions: x = "<<root1<<" and x = "<<root2;

    }
    if(discri==0)
    {
        root1= -b/(2*a);
        root2=root1;
        cout<<"Solution: x = "<<root1;
    }
    if(discri<0)
    {
        root1=-(b/(2*a));
	
	root=(sqrt(-(discri)))/(2*a);
        root2 = -(b/(2*a));
        cout<<"Complex Solutions: x = "<<root1<<" + "<<root<<"i and x = "<<root2<<" - "<<root<<"i";
    }


}