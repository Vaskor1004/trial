#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m,n,sum=0,count=0;
    cin>>m>>n;
    int arr[m];
    sort(arr,arr+m);
    for(int i=0;i<m;i++){
            cin>>arr[i];
    }
     sort(arr,arr+m);
     for(int i=0;i<m;i++){
        if(arr[i]<0){
            sum+=arr[i];
            count++;
            if(count==n){
                break;
            }
        }
    }
    cout<<(-1)*sum<<endl;
    return 0;
}
