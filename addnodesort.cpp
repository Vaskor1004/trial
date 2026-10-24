#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node*first=NULL;
node*last=NULL;
void insertlast(int x){
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
        p=p->next;
    }
}
void addnodesort(struct node* p, int a){
     node*t=new node;
     t->data=a;
     t->next=NULL;
     node* q=NULL;
     while(p!=NULL){
        if(p->data<a){
                q=p;
            p=p->next;
        }
        else{break;}
     }

     if(q==NULL){
        t->next=first;
        first=t;
     }
     else{
             p=q;
     t->next=p->next;
     p->next=t;
     }
}
int main()
{
    int x;
    while(true){
        cout<<"Press 1 to insert"<<endl;
        cout<<"press 2 to exit"<<endl;
        short s;
        cin>>s;
        if(s==1){
            cout<<"Enter the element:";
            cin>>s;
            insertlast(s);
        }
        else{
            break;
        }
    }
    cout<<endl<<"The elements are:";
    display(first);
    addnodesort(first,9);
     cout<<endl<<"The elements are:";
    display(first);
    cout<<endl;
    return 0;
}
