#include <iostream>
using namespace std;
void cal();
main()
{
 cal();
}
void cal()
{
int length,stickers;
cout<<"Enter the side length of the Rubik's Cube: ";
cin>>length;
stickers=(6 *length) * length;
cout<<"Number of stickers needed: "<<stickers;
}