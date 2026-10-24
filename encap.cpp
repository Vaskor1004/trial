#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class account
{
private :
    int id;
    double balance;

public:
    void setaccount(int x,double y)
    {
       id=x;
       balance=y;
       getaccount();
    }
    void getaccount()
    {
        cout<<id<<" "<<balance<<endl;
    }
};
int main()
{
   account p,q;
   int id,id1;
   double balance,balance1;
   cin>>id;
   cin>>balance;
  // p.setaccount(id,balance);
   cin>>id1;
   cin>>balance1;
   p.setaccount(id,balance);
   q.setaccount(id1,balance1);
}

