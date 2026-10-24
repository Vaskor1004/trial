#include<iostream>
using namespace std;
class bankaccount
{
private:

    string accountholdername="Mohammod Sami";
    int accountnumber=12345;
    double balance=15000;
    double deposit;
    double withdral;
public:
    void getdeposit(double d)
    {
        deposit=d;
        balance+=deposit;
        cout<<"money deposit successfully done!"<<endl;
        cout<<endl;
    }
    void getwithdral(double w)
    {
        if(w>balance)
        {
            cout<<endl<<"insufficient balance!!!"<<endl;
            cout<<"check your balance and try again"<<endl;
            cout<<endl;
        }
        else{
        withdral=w;
        balance-=withdral;
        cout<<"money withdral successfully done!"<<endl;
        cout<<endl;
        }
    }
    void show()
    {
        cout<<endl<<"your current balnce is:"<<balance<<" TAKA"<<endl;
        cout<<endl;
    }
    void showdetails()
    {
       cout<<endl<<"name is:"<<accountholdername<<endl;
       cout<<"account number is:"<<accountnumber<<endl;
       cout<<"current balace is:"<<balance<<endl;
       cout<<endl;
    }
};
int main()
{
    double deposit,withdral;
    bankaccount e1;
    char ch;
    while(ch!='5')
    {
        cout<<"press 1 for deposit"<<endl;
    cout<<"press 2 for withdral"<<endl;
    cout<<"press 3 to see balance details"<<endl;
    cout<<"press 4 to see whole details"<<endl;
    cout<<"press 5 to exit"<<endl;
    cout<<"enter your choice:";
    cin>>ch;
    if(ch=='1')
    {
        cout<<"enter deposit amount:";
        cin>>deposit;
        e1.getdeposit(deposit);
        cout<<endl;
    }
    else if(ch=='2')
    {
        cout<<"enter withdral amount:";
        cin>>withdral;
        e1.getwithdral(withdral);
        cout<<endl;
    }
    else if(ch=='3')
    {
        e1.show();
        cout<<endl;
    }
    else if(ch=='4')
    {
        e1.showdetails();
        cout<<endl;
    }
     else if(ch=='5')
    {
        cout<<endl<<"THANK YOU"<<endl;
        break;
    }
    }
    return 0;
}
