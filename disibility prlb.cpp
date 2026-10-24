#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        int count=0;
        cin>>a>>b ;
        while(a%b!=0)
        {
            count++;
            a++;
        }
        cout<<count<<endl;
    }
    return 0;
}
