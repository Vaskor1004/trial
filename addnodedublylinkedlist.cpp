#include<iostream>
using namespace std;
int count=0;
struct node
{
    node* prev;
    int data;
    node* next;
};
node*first=NULL;
node*last=NULL;
void insertlast(int x){
    node* newnode=new node;
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(first==NULL){
        first=last=newnode;
    }
    else{
        last->next=newnode;
        newnode->prev=last;
        last=newnode;
    }
}
void forwardway(struct node* p){
    while(p!=NULL){
        cout<<p->data<<" ";
        count++;
        p=p->next;
    }
}
void backwardway(struct node* q){
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->prev;
    }
}
void addnode(int pos,int x){
    node* newnode=new node;
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
    node* p=new node;
    p=first;
    if(pos==1){
        newnode->next=p;
        p->prev=newnode;
       first=newnode;
    }
    else if(pos>count){
        last->next=newnode;
        newnode->prev=last;
        last=newnode;
    }
    else{
           pos--;
    while(pos--){
        p=p->next;
    }
    newnode->next=p->next;
    if(p->next!=NULL){
        p->next->prev=newnode;
    }
    p->next=newnode;
    newnode->prev=p;
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
                cout<<"Enter the element:";
                    cin>>x;
           insertlast (x);
        }
        else{break;}
    }
    cout<<endl<<"Element forwardly:";
    forwardway(first);
    cout<<endl<<"Element backwardly:";
    backwardway(last);
    cout<<endl;
    int pos;
    cout<<"Enter the position:";
    cin>>pos;
    cout<<"Enter the number :";
    cin>>x;
    addnode(pos,x);
    cout<<endl;
    cout<<endl<<"Element forwardly:";
    forwardway(first);
    cout<<endl<<"Element backwardly:";
    backwardway(last);
    cout<<endl;

}
