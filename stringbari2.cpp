/*#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int i=s.length()-1;
    while(i>=0){
        cout<<s[i];
        i--;
    }
    int j=s.length()-1,i=0;
    while(i<j){
        swap(s[i],s[j]);
        //cout<<s[i];
        i++;j--;
    }
    cout<<s;
}*/
#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='0'){continue;}
            int count=1;
        for(int j=i+1;s[j]!='\0';j++){
            if(s[i]==s[j]){
                count++;
                s[j]='0';
            }
        }
        if(s[i]!='0'&& s[i]!=' ')
        cout<<s[i]<<" Repeated for "<<count<<" Times"<<endl;
    }
}
