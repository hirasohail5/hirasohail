#include <iostream>
using namespace std;
main( )
{
float megabytes,bit;
cout<<"Enter the size in megabytes (MB): ";
cin >> megabytes;
bit = megabytes * 1024 * 1024 * 8;
cout << megabytes <<" MB is equivalent to " <<bit<< " bits.";
}