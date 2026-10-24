#include<iostream>
using namespace std;
int main()
{
    int grade,drop;
    float cgpa;
    cout<<"enter your cgpa:";
    cin>>cgpa;
    cout<<"number of grade lower than B+:";
    cin>>grade;
    cout<<"number of course drop:";
    cin>>drop;
    if(cgpa>=3.80&&grade==0&&drop==0)
    {
        cout<<"you are applicable for 45% scholarship";
    }
    else if(cgpa>=3.75&&(grade>=1&&grade<=3)||drop==1)
    {
        cout<<"you are applicable for 25% scholarship";
    }
    else if(cgpa>=3.70&&(grade>=1&&grade<=5)||(drop>=1&&drop<=3))
    {
        cout<<"you are applicable for 10% scholarship";
    }
    else
        cout<<"yor are not applicable for scholarship";
    return 0;
}
