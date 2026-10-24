#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* first=NULL;
node* last=NULL;
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
void deletenode(struct node* p,int a){
     a--;
     if(a==0){
        first=p->next;
        delete p;
     }
     else{
    node*q=new node;
      while(a--){
            q=p;
        p=p->next;
      }
      q->next=p->next;
      delete p;
     }
}
int main()
{
    int x;
    while(true){
        cout<<"Press 1 to insert"<<endl;
        cout<<"Press 2 to exit"<<endl;
        short s;
        cin>>s;
        if(s==1){
            cout<<"enter the element:";
            cin>>x;
            insertlast(x);
        }
        else{
            break;
        }
    }
    cout<<endl<<"The elements are:";
    display(first);
    cout<<endl<<"Give the position:";
    cin>>x;
    deletenode(first,x);
    cout<<endl<<"The elements are:";
    display(first);
    cout<<endl;
}
