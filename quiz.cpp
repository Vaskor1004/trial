/*#include<iostream>
using namespace std;
void add(int a[],int n,int pos,int val){
    if(pos==0 || pos>n+1){
        cout<<"out of index"<<endl;
        exit(0);
    }
    if(pos==n+1){
        a[n]=val;
        n++;
    }
    else{
    int i;
    for( i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    n++;
    a[i]=val;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void removenum(int a[],int n,int pos){

    int i;
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pos,val;
    cout<<"Enter the position:";
    cin>>pos;
    while(true){
        cout<<"press 1 to add"<<endl;
        cout<<"press 2 to remove"<<endl;
        cout<<"3 to exit"<<endl;
        short s;
        cin>>s;
        if(s==1){
             cout<<"Enter the value:";
              cin>>val;
           add(a,n,pos,val);
        }
        else if(s==2){removenum(a,n,pos);}
        else{break;}
    }

}*/
#include<iostream>
using namespace std;
void add(int a[],int &n,int pos,int val){
    if(pos==0 || pos>n+1){
        cout<<"out of index"<<endl;
        exit(0);
    }
    if(pos==n+1){
        a[n]=val;
        n++;
    }
    else{
    int i;
    for( i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    n++;
    a[i]=val;
    }
    cout<<"----------------------------------------------"<<endl;
    cout<<"Output:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"----------------------------------------------"<<endl;
    cout<<endl;

}
void removenum(int a[],int &n,int pos){

    int i;
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Output:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"----------------------------------------------"<<endl;
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pos,val;
    while(true){
        cout<<"press 1 to add"<<endl;
        cout<<"press 2 to remove"<<endl;
        cout<<"3 to exit"<<endl;
        short s;
        cin>>s;
        if(s==1){
             cout<<"Enter the position:";
             cin>>pos;
             cout<<"Enter the value:";
              cin>>val;
           add(a,n,pos,val);
        }
        else if(s==2){
            cout<<"Enter the position:";
            cin>>pos;
            removenum(a,n,pos);
        }
        else{break;}
    }

}

