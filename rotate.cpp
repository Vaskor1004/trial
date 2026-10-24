#include<iostream>
using namespace std;
int  main()
{
    int n;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int i=0,j=n-1;
    while(i<j){
        while(arr[i]>0){i++;}
        while(arr[j]<0){j--;}
        if(i<j)
        swap(arr[i],arr[j]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
