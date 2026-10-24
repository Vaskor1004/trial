#include<iostream>
using namespace std;
int main(){
   string id;
   short sems;
   int year,num=0;
   cout<<"Enter your id:";
   cin>>id;
   cout<<"Enter current semester:";
   cin>>sems;
   cout<<"Enter the year:";
   cin>>year;
   for(char c : id){
    if(c>='0' && c<='9'){
        num=(num*10)+(c-'0');
    }
    else{break;}
   }
   short s=(year%100);
   short last =(id[9]-'0');
   if(last>sems){
   cout<<(((s-num)*3)-(last-sems))+1<<"th semester"<<endl;
   }
   else{
    cout<<(((s-num)*3)+(sems-last))+1<<"th semester"<<endl;
   }
}
