#include<iostream>
using namespace std;
void sum()
{
    int num1,num2;
    cout<<"enter two number:";
    cin>>num1>>num2;
    cout<<"sum is="<<num1+num2;
}
void sub()
{
    int num1,num2;
    cout<<"enter two number:";
    cin>>num1>>num2;
    cout<<"sum is="<<num1-num2;
}
int main()
{
    int n;
    cin>>n;
    if(n==1){
        sum();
    }
    else{
        sub();
    }
    return 0;
}
