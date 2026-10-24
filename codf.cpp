#include<iostream>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if((a+m)<=5){
            count++;
        }
    }
    cout<<count/3<<endl;
    return 0;
}
