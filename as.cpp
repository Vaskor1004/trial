#include<iostream>
using namespace std;
int main()
{
    int n,odd=0,even=0;
    cin>>n;
    for(int i=1;i<=n;i=i+2)
    {
        odd=odd+i;
    }
    for(int j=2;j<=n;j=j+2)
    {
        even=even+j;
    }
    int result=even-odd;
    cout<<result;
    return 0;
}
