//class access information for two account user input and array
#include<iostream>
#include<string>
using namespace std;
class account
{
public:
    string name;
    double balance;
    float d,w;

    void deposit(float x)
    {
        balance =balance+x;
        cout<<"current balance is:"<<balance<<endl;
    }
    void withdral(float y)
    {
        balance=balance-y;
        cout<<"current balance is:"<<balance<<endl;
    }
};
int main()
{
    int n;
    cout<<"how much person:";
    cin>>n;
   account person[n];
   int i,d,w;
   for(i=0;i<n;i++)
   {
       cin.ignore();
       cout<<"information of person "<<i+1<<endl;
       cout<<"enter name:";
       getline(cin,person[i].name);
       cout<<"enter balance:";
       cin>>person[i].balance;
       cout<<"enter deposit amount:";
       cin>>person[i].d;
       cout<<"enter withdral amount:";
       cin>>person[i].w;
   }
   for(i=0;i<n;i++)
   {
       cout<<person[i].name<<endl;
      person[i].deposit(person[i].d);
       person[i].withdral(person[i].w);
   }
}
