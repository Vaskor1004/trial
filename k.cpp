#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float sum=0;
    cout<<"enter size:";
    cin>>n;
    float* ptr=new float(n);
    cout<<"taking grade:";
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
        sum+=ptr[i];
    }
    cout<<endl<<"sum is:"<<sum<<endl;
    cout<<"average is:"<<(float)sum/n<<endl;
    delete []ptr;
    ptr=NULL;
    return 0;
}
