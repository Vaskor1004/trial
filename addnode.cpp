#include<iostream>
using namespace std;
int count=0;
struct node{
    int data;
    node* next;
};

node* first=NULL;
node* last=NULL;

void insert(int x){
     node* t=new node;
     t->data=x;
     t->next=NULL;
     if(first==NULL){
        first=last=t;
     }
     else{
        last->next=t;
        last=t;
     }
}
void display(struct node* p){
   while(p!=NULL){
    cout<<p->data<<" ";
    count++;
    p=p->next;
   }
}
void addnode(struct node* p,int pos,int n){
     node* t=new node;
     t->data=n;
     if(pos<count){
        while(pos--){
            p=p->next;
        }
         t->next=p->next;
         p->next=t;
     }
    else{
        cout<<"Out of index----------------"<<endl;
    }

}
int main()
{
    int x;
    while(true){
        cout<<"press 1 to insert"<<endl;
        cout<<"press 2 to exit "<<endl;
        short n;
        cin>>n;
        if(n==1){

            cout<<"Enter the element:";
            cin>>x;
            insert(x);
        }
        else{
            break;
        }
    }
    cout<<endl<<"The elemnets are:";
    display(first);
    int pos;
    cout<<endl<<"Enter the position to insert:";
    cin>>pos;
    cout<<"Enter the element:";
    cin>>x;
    addnode(first,pos,x);
    cout<<endl<<"The elemnets are:";
    display(first);
    cout<<endl;

    return 0;
}
