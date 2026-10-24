#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    while(1){
    int u,v,r=1;
    cin>>v>>u;
    while(u!=0)
    {
        r=v%u;
        v=u;
        u=r;
    }
    cout<<v<<endl;
    }
    return 0;
}

