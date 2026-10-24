/*#include<iostream>
using namespace std;
struct node{
   int data;
   node * next;
};

node * first=nullptr;
node* last=nullptr;

void add(int x)
{
    node* t=new node;
    t->data=x;
    t->next=nullptr;

    if(first==nullptr){
        first=last=t;
    }
    else{
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=nullptr)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    short n;
    int x;
    while(true){
        cout<<"Prees 1 to insert:"<<endl;
        cout<<"Press 2 to exit:"<<endl;
        cin>>n;
        if(n==1){
            cout<<"Enter the element:";
            cin>>x;
            add(x);
        }
        else{
            break;
        }
    }
    cout<<endl<<"The elements are:";
    display(first);
    cout<<endl;
}*/
#include<iostream>
using namespace std;
struct node{
   int data;
   node * next;
};

node * first=nullptr;
node* last=nullptr;

void add(int a[],int n)
{
    for(int i=0;i<n;i++){

        node *t=new node;
        t->data=a[i];
        t->next=nullptr;

      if(first==nullptr){
        first=last=t;
      }
      else{
        last->next=t;
        last=t;
      }
    }
}
void display(struct node *p)
{
    while(p!=nullptr)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    add(arr,6);
    display(first);
    cout<<endl;
}

