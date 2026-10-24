/*#include<iostream>
using namespace std;
struct node{
    node* left;
    int data;
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
    if(root==nullptr){return;}
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root==nullptr){return;}

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root){
    if(root==nullptr){return;}

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node* root=create(1);
    root->left=create(2);
    root->right=create(3);
    root->left->left=create(4);
    root->left->right=create(5);
    root->right->right=create(6);
    cout<<"showing preorder tree:";
    preorder(root);
    cout<<endl;
    cout<<"showing inorder tree:";
    inorder(root);
    cout<<endl;
    cout<<"showing postorder tree:";
    postorder(root);
}*/
#include<iostream>
using namespace std;
struct node{
    node* left;
    int data;
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
    int value;
    cout<<"Enter the element:";
    cin>>value;

    node* root=create(value);

    char choise;
    cout<<"Do you want to create left child of "<<value<<"(y(for yes)/n(for no)):";
    cin>>choise;
    if(choise=='Y' || choise=='y'){
        root->left=build();
    }
    cout<<"Do you want to create right child of "<<value<<"(y(for yes)/n(for no)):";
    cin>>choise;
    if(choise=='Y' || choise=='y'){
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
int main()
{
    cout<<"Build your tree---------"<<endl;
    node* root=build();

    cout<<"showing preorder tree:";
    preorder(root);
}
