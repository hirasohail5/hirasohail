#include<iostream>
#include<windows.h>
using namespace std;
void printmenu();
void calculateaggregate();
void comparemarks();

main()
{
printmenu();
calculateaggregate();
comparemarks();
}

void printmenu()
{
cout<<"              *       *       *      *       *   ******                       "<<endl;
cout<<"              *       *      * *     * *   * *  *                            "<<endl;
cout<<"              *       *     *   *    *  * *  *  *                             "<<endl;
cout<<"              *       *    *******   *   *   *   *****                        "<<endl;
cout<<"              *       *   *       *  *       *        *                       "<<endl;
cout<<"               *******   *         * *       *  *******                    "<<endl;
}
void calculateaggregate()
{
 string name;
float matricmarks;
float intermarks;
float ecatmarks;
float aggregate;
 cout<<"Enter your name: ";
 cin>>name;
 cout<<"Enter your matric marks:";
 cin>>matricmarks;
 cout<<"Enter your inter marks: ";
 cin>>intermarks;
 cout<<"Enter your ecat marks: ";
 cin>>ecatmarks;
 aggregate=(30*(matricmarks/1100))+(30*(intermarks/550))+(40*(ecatmarks/400));
 cout<<"Aggregate="<<aggregate <<"%"<<endl;
 }
void  comparemarks()
 {
    string namestd1;
    int ecatmarkstd1;
    string namestd2;
    int ecatmarkstd2;
    cout<<"Enter name of first student ";
    cin>>namestd1;
    cout<<"Enter name of second student ";
    cin>>namestd2;
    cout<<"Enter the ecat marks of first student ";
    cin>>ecatmarkstd1;
    cout<<"Enter the ecat marks of second student ";
    cin>>ecatmarkstd2;
    if(ecatmarkstd1>ecatmarkstd2)
    {
        cout<<namestd1;
    }
    if(ecatmarkstd1<ecatmarkstd2)
    {
        cout<<namestd2;
    }
 }