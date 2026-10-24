#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int p[101]={0};
    int m,level,d;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>level;
        p[level]=1;
    }
    int k;
    cin>>k;
    for(int j=0;j<k;j++)
    {
        cin>>level;
        p[level]=1;
    }
    for(int i=1;i<=n;i++)
    {
        d=0;
        if(p[i]==0)
        {
            d=-1;
            break;
        }
    }
    if(d==-1)
        cout<<"Oh, my keyboard!";
    else
        cout<<"I become the guy.";
    return 0;
}
