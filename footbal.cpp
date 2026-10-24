#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
    int n,k,count=0,i;
    cin>>n>>k;
    for( i=1;i<=INT_MAX;i++){
        if(i%n!=0){
            count++;
        }
            if(count==k)
                break;
    }
    cout<<i<<endl;
    }
    return 0;
}
