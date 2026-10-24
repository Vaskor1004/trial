#include<iostream>
using namespace std;
int main()
{
    int n,even=0,odd=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even+=i;
        }
        else
        {
            odd+=i;
        }
    }
    int result=even-odd;
    cout<<result;

    return 0;
}
