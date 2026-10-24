
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node*first=NULL;
node*last=NULL;

void insertcircular(int x){
    node* newnode=new node;
    newnode->data=x;
    if(first==NULL){
        first=newnode;
        newnode->next=first;
    }
    else{
        node* temp=first;
        while(temp->next!=first){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=first;
    }
}
void display(struct node* p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=first);
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
            insertcircular(x);
        }
        else{
            break;
        }
    }
    cout<<endl<<"The elements are:";
    display(first);

}
