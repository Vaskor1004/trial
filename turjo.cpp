#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number:";
    cin>>num;
    if (num>100)
    {
        cout<<"invalid";
    }
    else  if (num<0)
    {
        cout<<"invalid";
    }
    else if (num>=80)
    {
        cout<<"A+";
    }
    else if (num>=70)
    {
        cout<<"A";
    }
    else if (num>=60)
    {
        cout<<"A-";
    }
    else if (num>=50)
    {
        cout<<"B";
    }

    else
    {
        cout<<"fail";
    }





}
