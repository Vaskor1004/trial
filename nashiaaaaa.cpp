
#include<iostream>
using namespace std;
int main()
{
    int n,comp=0;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mini]){
                mini=j;
                comp++;
            }
        }
        swap(a[i],a[mini]);

    }
    cout<<"The sorted elements by selection:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int first=0;
    int last=n-1;
    int s;
    cout<<"Enter the number for searching:";
    cin>>s;
    bool b=false;
    while(first<=last){
        int mid=(first+last)/2;
        if(a[mid]==s){
                b=true;
            cout<<"Element has found index: "<<mid<<endl;
            break;
        }
        else if(s<a[mid]){
            last=mid-1;
        }
        else if(s>a[mid]){
            first=mid+1;
        }
    }
    if(!b){
        cout<<"Element not found"<<endl;
    }
    cout<<"Number of comparisons: "<<comp<<endl;

}
