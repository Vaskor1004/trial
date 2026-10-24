#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
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
void countnode(struct node* p){
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }
    cout<<"Total nodes are :"<<count<<endl;
}
void sum(struct node* p){
    int sum=0;
    while(p!=NULL){
        sum+=p->data;
        p=p->next;
    }
    cout<<"Sum is :"<<sum<<endl;
}
void maximum(struct node* p){
    int s=INT_MIN;
    while(p!=NULL){
        if(p->data>s){
            s=p->data;
        }
        p=p->next;
    }
    cout<<"MAx NUMBER IS :"<<s<<endl;
}
int main()
{
    short n;
    int x;
   /* insertlast(2);
    insertlast(3);
    insertlast(4);*/
    while(true){
        cout<<"Prees 1 to insert "<<endl;
        cout<<"Press 2 to exit "<<endl;
        cin>>n;
        if(n==1){
            cout<<"Enter the element: ";
            cin>>x;
            insertlast(x);
        }
        else{
            break;
        }
    }
    cout<<endl<<"The elements are: ";
    display(first);
    cout<<endl;
    countnode(first);
    sum(first);
    maximum(first);
    cout<<endl;
}
