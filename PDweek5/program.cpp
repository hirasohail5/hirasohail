#include<iostream>
using namespace std;
void cal1(int option);
void printheader();
void mainmenucustomer();
void choosemenu();
void mainmenuadmin();

main()
{
    printheader();
    choosemenu();
}
void choosemenu()
{
    int option ;
    cout<<"Enter an option(1 for admin,2 for customer): ";
    cin>>option; 
    if(option==1)
    {
       mainmenuadmin(); 
    }
    if(option==2)
    {
        mainmenucustomer();
    }

}

void printheader()
{
       cout<<" ======================"<<endl;
       cout<<" BANK MANAGEMENT SYSTEM"<<endl;
       cout<<" ======================"<<endl;
}

void mainmenucustomer()
{
    int option;
    cout<<"          ::MAIN MENU::"<<endl;
    cout<<"    1. NEW ACCOUNT"<<endl;
    cout<<"    2. DEPOSIT MONEY"<<endl;
    cout<<"    3. WITHDRAW AMOUNT"<<endl;
    cout<<"    4. BALANCE ENQUIRY"<<endl;
    cout<<"    5. ALL ACCOUNT HOLDER LIST"<<endl;
    cout<<"    6. CLOSE AN ACCOUNT "<<endl;
    cout<<"    7. EXIT"<< endl;
    cout<<" "<<endl;
    cout<<"    Select your option (1-7): ";
    cin>>option;
    cal1(option);

}
void mainmenuadmin()
{
    int option;
    cout<<"          ::MAIN MENU::"<<endl;
    cout<<"     1. CUSTOMER LIST "<<endl;
    cout<<"     2. MODIFY ACCOUNT"<<endl;
    cout<<"     3. CHECK STATUS OF ACCOUNT"<<endl;
    cout<<"     4. TOTAL AMOUNT OF ALL CUSTOMERS"<<endl;
    cout<<"     5. CHECK TRANSACTION HISTORY OF CUSTOMER "<<endl;
    cout<<"     6. SHOW NEW ACCOUNTS"<<endl;
    cout<<"     7. SHOW OLD ACCOUNTS"<<endl;
    cout<<""<<endl;
    cout<<"Select an option(1-7): "<<endl;
    cin>>option;
    cal1(option);


}

void cal1(int option)
{
    if(option==1)
    {
        int age;
        cout<<"Enter your age: ";
        cin>>age;
        if(age<18)
        {
            cout<<"Your are not eligible to open an account"<<endl;
        }
        if(age>=18)
        {
            int money,number;
            string name,accountname;
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter your phone number: ";
            cin>>accountname;
            cout<<"Enter your CNIC number: ";
            cin>>number;
            cout<<"Enter your address: ";
            cin>>address;

            cout<<"How much money you want to enter in your account(atleast 5,000): ";
            cin>>money;
            if (money<5000)
            {
                cout<<"This money is not enough."<<endl;
                cout<<"Enter again: "<<endl;
            }
        }
    }

}
