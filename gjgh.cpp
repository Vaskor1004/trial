#include<iostream>
using namespace std;
int main()
{
    int n,x,y,count=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(x<=y-2)count++;
    }
    cout<<count;
    return 0;
}
