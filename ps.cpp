#include<iostream>
#include<string>
using namespace std;
class account
{
public:
    string name;
    double balance;

    void deposit(float x)
    {
        balance+=x;
        cout<<"current balance after deposit:"<<balance<<endl;
    }
    void withdral(float y)
    {
        balance-=y;
        cout<<"current balance after withdral:"<<balance<<endl;
    }
};
int main()
{
    //account vaskor;
    account* vaskor=new account();
    (*vaskor).name="vaskor saha";
    (*vaskor).balance=5000.00;
    cout<<"name:"<<(*vaskor).name<<endl;
    (*vaskor).deposit(1000.00);
    (*vaskor).withdral(500.00);

}
