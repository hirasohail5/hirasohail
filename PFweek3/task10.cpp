#include <iostream>
using namespace std;
main()
{ 
	int win, draw,lose,points;
	string name;
	cout<<"Enter the name of cricket team:";
	cin >>name;
	cout<<"Enter the number of wins:";
	cin>>win;
	cout<<"Enter the number of draws:";
	cin>>draw;
	cout<<"Enter the number of losses:";
	cin>>lose;
	points=(3 * win)+(1*draw)+(0*lose);
	cout<<"Pakistan has obtained "<<points<<" points in the Asia Cup tournament.";
}