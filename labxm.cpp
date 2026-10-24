#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0,les=0,lar=0;
    cout<<"enter student number of student who participated:";
    cin>>n;

    if(n>0){
            int arr[n];
    cout<<"taking numbers of students:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    float avg=(float)sum/n;
    cout<<"the average is:"<<avg<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=60)
        {
            les++;
        }
        else if(arr[i]>60)
        {
            lar++;
        }
    }
    cout<<"the number of student who get higher than 60: "<<lar<<endl;
     cout<<"the number of student who get less than  60: "<<les<<endl;
    }
    else{
        cout<<"error!";
    }
    return 0;
}
