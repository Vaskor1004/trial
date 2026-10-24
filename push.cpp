/*#include<iostream>
using namespace std;
int top=-1;
void finish(){
   exit(0);
}
int  push(int a[],int n){
    int x;
    cout<<"enter the element :";
    cin>>x;
    if(top==n-1){
        cout<<"Stack is full "<<endl;
        finish();
    }
    else{
        top++;
        a[top]=x;
    }
    cout<<"------------------------------------------"<<endl;
    cout<<"Current stack: ";
    for(int i=0;i<=top;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"------------------------------------------"<<endl;
}
int main()
{
    int n,x,k;
    cout<<"enter size of array :";
    cin>>n;
    int a[n];
    while(true){
            cout<<"press 1 to push "<<endl;
            cout<<"press 2 to exit "<<endl;
            cin>>k;
            if(k==1){
       push(a,n);
            }
            else{
                finish();
            }
    }

}*/
#include<iostream>
using namespace std;

int top=-1;
void finish()
{
    exit(0);
}
void push(int arr[],int n){
    int x;
    cout<<"Enter the element:";
    cin>>x;
    if(top==n-1){
        cout<<"Stack is full"<<endl;
         cout<<"-------------------------------------------------"<<endl;
    cout<<"Current stack is:";
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
    cout<<"-------------------------------------------------"<<endl;
        finish();
    }
    else{
        top++;
        arr[top]=x;
    }
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Current stack is:";
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<endl;
}
void pop(int arr[]){
    if(top==-1){
        cout<<"stack is empty"<<endl;
        cout<<"stack has no element"<<endl;
        finish();
    }
    else{
        top--;
        cout<<"---------------------------------------------"<<endl;
        cout<<"After poping Current stack is:";
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"---------------------------------------------"<<endl;
    }
}
void peek(int arr[]){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
            cout<<"-------------------------------------------------"<<endl;
    cout<<"The top most element is: "<<arr[top]<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the sizze:";
    cin>>n;
    int a[n];
    while(true){
        cout<<"Enter 1 to insert "<<endl;
        cout<<"Enter 2 to pop "<<endl;
        cout<<"Enter 3 to see the peek element "<<endl;
        cout<<"Enter 4 to exit "<<endl;
        short s;
        cin>>s;
        if(s==1){
            push(a,n);
        }
       else if(s==2){
        pop(a);
       }
       else if(s==3){
        peek(a);
       }
       else{finish();}
    }
}
