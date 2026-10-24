/*#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int n;
    cout<<"enter size:";
    cin>>n;
    if(n<10){
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int value;
    cout<<"enter value:";
    cin>>value;
    int pos;
    cout<<"enter position:";
    cin>>pos;
    if(pos>=0&&pos<=n+1){
     for(int i=n-1;i>=pos-1;i--)
    {
       arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
  else
    cout<<"out of boundary";
   }
   else
    cout<<"error!";
}*/
//deletion for unsorted array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pos;
    cout<<"enter position:";
    cin>>pos;
    if(pos>=0&&pos<=n){
    arr[pos-1]=arr[n-1];
    n--;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
else
    cout<<"invalid";
    return 0;
}

