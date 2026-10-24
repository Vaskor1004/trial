//ass number 2
#include<iostream>
using namespace std;
int prime(int num)
{
    if(num<=1)
    {
        return -1;
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                return -1;
                break;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"enter any positive number:";
    cin>>n;
    int result=prime(n);
    if(result==-1)
        cout<<"not prime"<<endl;
    else
        cout<<"prime"<<endl;
    return 0;
}
