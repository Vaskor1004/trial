#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* create(int x) {
    node* newnode = new node;
    newnode->data = x;
    newnode->left = nullptr;
    newnode->right = nullptr;
    return newnode;
}

node* insertBST(node* root, int x) {
    if (root == nullptr) {
        return create(x);
    }

    if (x < root->data) {
        root->left = insertBST(root->left, x);
    } else if (x > root->data) {
        root->right = insertBST(root->right, x);
    }

    return root;
}

int main()
{

}
