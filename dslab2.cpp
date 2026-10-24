#include<iostream>
using namespace std;
int main()
{
    int n,compare=0;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_index]){
                min_index=j;
                compare++;
            }
        }
        if(min_index!=i){
        swap(a[i],a[min_index]);
        }

    }
    cout<<"The sorted elements by selection:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int first=0;
    int last=n-1;
    int x;
    cout<<"Enter the number for searching:";
    cin>>x;
    bool b=false;
    while(first<=last){
        int middle=(first+last)/2;
        if(a[middle]==x){
                b=true;
            cout<<"Element has found index: "<<middle<<endl;
            break;
        }
        else if(x<a[middle]){
            last=middle-1;
        }
        else if(x>a[middle]){
            first=middle+1;
        }
    }
    if(!b){
        cout<<"Element not found"<<endl;
    }
    cout<<"Number of comparisons: "<<compare<<endl;

}
