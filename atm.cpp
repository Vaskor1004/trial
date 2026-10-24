
#include<iostream>
using namespace std;
class ATMmachine
{
private:
    double balance;
    double withdral_amount;
    double transfer_amount;
public:
    ATMmachine(double amount)
    {
        balance=amount;
        withdral_amount=0;
        transfer_amount=0;
    }
    void withdral(double amount)
    {
        if(amount>balance)
        {
            cout<<"insufficient balance!";
        }
        else
        {
            balance-=amount;
            withdral_amount=amount;
            cout<<"withdral amount="<<withdral_amount<<endl;
        }
    }
    void transfer(double amount)
    {
        if(amount>balance)
        {
            cout<<"insufficient balance!";
        }
        else
        {
            balance-=amount;
            transfer_amount=amount;
            cout<<"transfer balance="<<transfer_amount<<endl;
        }
    }
    void transactions()
    {
        cout<<"withdral amount="<<withdral_amount<<endl;
        cout<<"transfer balance="<<transfer_amount<<endl;
        cout<<"recent balance="<<balance<<endl;
    }
};
int main()
{
    ATMmachine atm(10000);
    cout<<"press w for withdral"<<endl;
    cout<<"press t for transfer"<<endl;
    char ch;
    cin>>ch;
    if(ch=='w')
    {
        cout<<"enter your amount:";
        double cash;
        cin>>cash;
        atm.withdral(cash);
        cout<<endl<<"do you want to see transaction?"<<endl;
        cout<<"press 1 to see"<<endl;
        cout<<"press 2 to get out"<<endl;
        int n;
        cin>>n;
        if(n==1)
        {
            atm.transactions();
        }
        else
        {
            cout<<"thanks...";
        }
    }
    else if(ch=='t')
    {
        cout<<"enter your amount:";
        double cash;
        cin>>cash;
        atm.transfer(cash);
        cout<<endl<<"do you want to see transaction?"<<endl;
        cout<<"press 1 to see"<<endl;
        cout<<"press 2 to get out"<<endl;
        int n;
        cin>>n;
        if(n==1)
        {
            atm.transactions();
        }
        else
        {
            cout<<"thanks...";
        }
    }


}
