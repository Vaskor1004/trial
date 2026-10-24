/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}*/
#include<iostream>
using namespace std;
int main()
{
    int n,comp=0,exchange=0;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
     cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
                comp++;
            if(a[j]<a[minindex]){minindex=j;}
        }
        if(minindex!=i){
       swap(a[i],a[minindex]);
          exchange++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<comp<<" "<<exchange<<endl;
}
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int x=a[i];
        int j=i-1;
        while(j>-1 && a[j]>x){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cout<<"Enter the searching element:";
    cin>>x;
    int first=0;
    int last=n-1;
    bool check=false;
    while(first<=last){
        int middle=(first+last)/2;
        if(a[middle]==x){
                check=true;
            cout<<"Element has found at index "<<middle<<endl;
            break;
        }
        else if(x<a[middle]){
            last=middle-1;
        }
        else if(x>a[middle]){
            first=middle+1;
        }
    }
    if(!check){
        cout<<"Not found"<<endl;
    }
}*/
