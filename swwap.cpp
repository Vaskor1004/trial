#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,evenc=0,oddc=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if((i%2==0)&&(arr[i]%2!=0)){
            evenc++;
        }
        else if((i%2!=0)&&(arr[i]%2==0)){
            oddc++;
        }
    }
   if(evenc==oddc)
    cout<<evenc<<endl;
   else
    cout<<-1<<endl;
    }
    return 0;
}
