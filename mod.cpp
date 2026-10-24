#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int d,m,n,flag=0;
    cin>>d>>m>>n;
    while(flag==0){
    if(n%d==m){
        flag=1;
        break;
    }
    n--;
    }
    cout<<n<<endl;
    }
    return 0;
}
