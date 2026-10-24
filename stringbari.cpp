#include<iostream>
using namespace std;
int main()
{
   char c[]="how ARE yOu I AM fine";
   int i=0,vowel=0,consonent=0,other=0,word=1;
   while(c[i]!='\0'){
    if(c[i]>=65 && c[i]<=90){
        c[i]=c[i]+32;
    }
    if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){vowel++;}
     else if(c[i]>=97 && c[i]<=122){consonent++;}
     else if(c[i]==' ' && c[i-1]!=' '){
        word++;
     }
     else{other++;}
    i++;
   }
   cout<<"vowel:"<<vowel<<endl;
    cout<<"consonent:"<<consonent<<endl;
    cout<<"Other:"<<other<<endl;
    cout<<"Word is:"<<word<<endl;
}
