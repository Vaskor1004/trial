#include<iostream>
using namespace std;
int sum_Less_Than_20(int arr[],int n){
    int sum=0;
    for(int i=0;i<5;i++){
        if(arr[i]<20){
            sum+=arr[i];
        }
    }
    return sum;
}
int main()
{
    int a[5];
    cout<<"Enter the element: ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int sum=sum_Less_Than_20( a,5);
    cout<<"The result is:"<<sum<<endl;
}
