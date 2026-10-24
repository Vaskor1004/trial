/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b,i;
    cin>>a>>b;
    int x[a],y[a];
    for(int i=0;i<a;i++){
        cin>>x[i];
    }
    for( i=0;i<a;i++){
        cin>>y[i];
    }
    int sum1=0,sum2=0,sum3=0;
    for( i=0;i<a;i++){
        sum1+=x[i];
    }
    for(int i=0;i<a;i++){
        sum2+=y[i];
    }
     if(b==0){cout<<sum1<<endl;}
    else if(sum1<sum2){
        sort(x,x+a);
        sort(y,y+a);
       for( i=0;i<b;i++){
        if(x[i]<y[a-i-1]){sum3+=y[a-i-1];}
       }
       while(i<a){
            sum3+=x[i];
             i++;
       }
       cout<<sum3<<endl;
    }
    else{cout<<sum1<<endl;}
    }
}*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b,i;
    cin>>a>>b;
    int x[a],y[a];
    for(int i=0;i<a;i++){
        cin>>x[i];
    }
    for( i=0;i<a;i++){
        cin>>y[i];
    }
    int sum1=0,sum3=0;
    for( i=0;i<a;i++){
        sum1+=x[i];
    }
     if(b==0){cout<<sum1<<endl;}
    else{
        sort(x,x+a);
        sort(y,y+a);
       for( i=0;i<b;i++){
        if(x[i]<y[a-i-1]){
                sum3+=y[a-i-1];
        }
        else{sum3+=x[i];}
       }
       while(i<a){
            sum3+=x[i];
             i++;
       }
       cout<<sum3<<endl;
    }
}
}

