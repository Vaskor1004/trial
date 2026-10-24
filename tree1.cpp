/*#include<iostream>'
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};

node* create(int x){
   node* newnode=new node;
   newnode->data=x;
   newnode->left=nullptr;
   newnode->right=nullptr;
   return newnode;
}
void preorder(node* root){
      if(root==nullptr){return ;}
      cout<<root->data<<" ";
      preorder(root->left);
      preorder(root->right);
}
int main()
{
    node* root=create(1);
    root->left=create(2);
    root->right=create(3);
    root->left->right=create(4);
    root->right->left=create(5);

    cout<<"preorder:";
    preorder(root);
}*/
#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* create(int x){
    node* newnode=new node;
    newnode->data=x;
    newnode->left=nullptr;
    newnode->right=nullptr;
    return newnode;
}

node* build(){

    int data;
    cout<<"Enter the element:";
    cin>>data;

    node* root=create(data);

    char ch;
    cout<<"Do you want to add left child of value "<<data<<" (y/n): ";
    cin>>ch;
    if(ch=='y' || ch=='Y'){
       root->left=build();
    }

    cout<<"Do you want to add right child of value "<<data<<" (y/n): ";
    cin>>ch;
    if(ch=='y' || ch=='Y'){
       root->right=build();
    }
    return root;

}

void preorder(node* root){

        if(root==nullptr){return;}

        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
}

void inorder(node* root){
    if(root==nullptr){return ;}
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root){
    if(root==nullptr){return ;}

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    cout<<"Build your tree---------------------------------"<<endl;
    node* root=build();

    cout<<"-----------------------------------------------"<<endl;
    cout<<"Showing preorder tree: ";
    preorder(root);
    cout<<"-----------------------------------------------"<<endl;

    cout<<"-----------------------------------------------"<<endl;
    cout<<"Showing inorder tree: ";
    inorder(root);
    cout<<"-----------------------------------------------"<<endl;

    cout<<"-----------------------------------------------"<<endl;
    cout<<"Showing postorder tree: ";
    postorder(root);
    cout<<"-----------------------------------------------"<<endl;


}
