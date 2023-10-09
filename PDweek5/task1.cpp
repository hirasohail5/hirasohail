#include<iostream>
using namespace std;

float cal(float length,float width,float height,string output4);
main()
{
float length,width,height,result1;
string output;
cout<<"Enter the length of the pyramid (in meters): ";
cin>>length;
cout<<"Enter the width of the pyramid (in meters): ";
cin>>width;
cout<<"Enter the height of the pyramid (in meters): ";
cin>>height;
cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
cin>>output;
result1=cal(length,width,height,output);
cout<<"The volume of the pyramid is: "<<to_string(result1)<<" cubic "<< output; 

}
float cal(float length,float width,float height,string output)
{
    float result;
    if (output=="centimeters")
    {
    result=((length*100)*(width*100)*(height*100))/3;
   
    }
    if(output=="meters")
    {
     result=(length*width*height)/3;


    
    }
     if(output=="kilometers")
     {
     result=((length/1000)*(width/1000)*(height/1000))/3;
     
     }
     if(output=="millimeters")
     {
    result=((length*1000)*(width*1000)*(height*1000))/3;
     
     }
    return result;

}