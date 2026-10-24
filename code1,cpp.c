#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[4];
    for(int i=0; i<4;i++)
    {
        cin>>a[i];
    }
    int x=max(a[0],a[1]);
    int y=max(a[2],a[3]);

    sort(a,a+n);
    if((x+y)==(a[2]+a[3])){cout}
}
