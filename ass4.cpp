//4 number ass
#include<iostream>
using namespace std;
float findmaximum(float *ptr)
{
    int max=*ptr;
     for(int i=0;i<7;i++)
     {
        if(*(ptr+i)>max)
        {
            max=*(ptr+i);
        }
     }
     return max;
}
float findminimum(float *ptr)
{
     int min=*ptr;
     for(int i=0;i<7;i++)
     {
        if(*(ptr+i)<min)
        {
            min=*(ptr+i);
        }
     }
     return min;
}
void inputtempareture(float *ptr)
{
    cout<<"taking input of tempareture:";
    for(int i=0;i<7;i++)
    {
        cin>>*(ptr+i);
    }
}
void displaysummary(float *ptr)
{
    cout<<"maximum tempareture is:"<<findmaximum(ptr)<<endl;
    cout<<"minimum tempareture is:"<<findminimum(ptr)<<endl;
}
int main()
{
    int size=7;
    float arr[size];
    inputtempareture(arr);
    displaysummary(arr);
    return 0;
}
