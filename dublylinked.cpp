#include<iostream>
using namespace std;
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
        p=p->next;
    }
}
void backwardway(struct node* q){
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->prev;
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
}
