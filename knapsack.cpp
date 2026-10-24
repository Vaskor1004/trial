#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of item:";
    cin>>n;

    float profit[n],weight[n],ratio[n];

    cout<<"Enter profits:";
    for(int i=0;i<n;i++){
        cin>>profit[i];
    }
    cout<<"Enter weights:";
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    for(int i=0;i<n;i++){
       ratio[i]=profit[i]/weight[i];
    }
    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-1-i;j++){
            if(ratio[j]<ratio[j+1]){
                swap(ratio[j],ratio[j+1]);
                swap(weight[j],weight[j+1]);
                swap(profit[j],profit[j+1]);
            }
        }
    }

    float totalprofit=0;
    int capasity;
    cout<<"Enter the capasity:";
    cin>>capasity;

    for(int i=0;i<n;i++){
        if(capasity>0 && weight[i]<=capasity){
            totalprofit+=profit[i];
            capasity-=weight[i];
        }
        else{
            totalprofit+=(ratio[i]*capasity);
            break;
        }
    }
    cout<<"Maximum profit :"<<totalprofit<<endl;
}
