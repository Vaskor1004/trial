#include<iostream>
using namespace std;
int main ()
{
    int num1,num2,num3;
    cout<<"Enter your first number:";
    cin>>num1;

    cout<<"Enter your second number:";
    cin>>num2;

    cout<<"Enter your third number:";
    cin>>num3;

    if(num1>num2 && num1>num3) {
        cout<<"Large number is: " << num1;
    }
    else if(num2>num1 && num2>num3) {
        cout<<"Large number is: " <<num2;
    }
    else {
        cout<<"Large number is: " <<num3;

    }
   return 0;
}
