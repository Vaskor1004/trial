#include<iostream>
using namespace std;
int count=0;
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
            count++;
        cout<<p->data<<" ";
        p=p->next;
     }
}
void inverse(struct node* p){
    int i=0,a[count];
    while(p!=NULL){
        a[i++]=p->data;
        p=p->next;
    }
   i--;
   p=first;
    while(p!=NULL){
        p->data=a[i--];
        p=p->next;
    }
}
int main()
{
   int x;
   while(true){
    cout<<"press 1 to insert "<<endl;
    cout<<"press 2 to exit "<<endl;
    short s;
    cin>>s;
    if(s==1){
            cout<<"Enter the element:";
    cin>>x;
        insertlast(x);
    }
    else{break;}
   }
   cout<<endl<<"the elements are:";
   display(first);
   inverse(first);
   cout<<endl<<"the reversed elements are:";
   display(first);
   cout<<endl;
}
