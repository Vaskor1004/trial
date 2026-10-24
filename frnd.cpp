#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r1=n/100;
    int rem=n%100;
    int r2=rem/20;
    rem=rem%20;
    int r3=rem/10;
    rem=rem%10;
    int r4=rem/5;
    rem=rem%5;
    int r5=rem/1;
    cout<<r1+r2+r3+r4+r5;
    return 0;
}
