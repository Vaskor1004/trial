#include<iostream>
using namespace std;
int main()
{
   int n,m,j=0;
   cin>>n>>m;
   int arr[n];
   for(int i=1;i<=n;i=i+2){
        arr[j]=i;
        j++;
   }
   for(int i=2;i<=n;i=i+2){
        arr[j]=i;
        j++;
   }
   cout<<arr[m-1]<<endl;
    return 0;
}
