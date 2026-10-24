#include<iostream>
using namespace std;
int main()
{

    int num,rem,r,sum=0;
    cout<<"enter any number:";
    cin>>num;
    while(num!=0)
    {
        rem=num%2;
        while(rem!=0)
        {
           r=rem%10;
           sum=(sum*10)+r;
           rem=rem/10;
        }
        num=num/2;
    }
    cout<<sum;




}
