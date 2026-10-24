#include<iostream>
using namespace std;
int main()
{
    int n,num,middle,x;
    cout<<"Enter size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
            bool b=false;
            for(int j=0;j<n-i-1;j++){
                    if(a[j]>a[j+1]){
                        b=true;
                        swap(a[j],a[j+1]);
                    }
            }
    if(!b){
              break;
    }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Enter the number to search----:";
    cin>>num;
    int low=0;
    int high=n-1;
    bool b=false;
    while(low<=high){
            middle=(low+high)/2;
    if(num==a[middle]){
        b=true;
        x=middle;
        break;
    }
    else if(num<a[middle]){
        high=middle-1;
    }
    else if(num>a[middle]){
        low=middle+1;
    }
    }
    if(b){
        cout<<"Number has found"<<endl;
        cout<<"Index is :"<<x<<endl;
        cout<<"Position is: "<<x+1<<endl;
    }
    else{
        cout<<num<<" is not found"<<endl;
    }
}
