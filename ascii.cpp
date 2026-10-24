#include<iostream>
using namespace std;
int main()
{
    string s1,s2,s4;
    getline(cin,s1);
    getline(cin,s2);
    string s3=s1+s2;
    int sum=0;
    for(char c:s3)
    {
        sum+=(int)c;
    }
    getline(cin,s4);
    int result=0;
    for(char ch:s4)
    {
        result+=(int)ch;
    }
    if(sum==result)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
