//ass unmber 3
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *ptr=arr;
    int max=*ptr;
    for(int i=0;i<n;i++)
    {
        if(*(ptr+i)>max)
        {
            max=*(ptr+i);
        }
    }
    cout<<"maximum number is:"<<max<<endl;
    return 0;
}
