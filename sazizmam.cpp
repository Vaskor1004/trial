#include<iostream>
using namespace std;

struct node {
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


void preorder(node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


void postorder(node* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


bool searchBST(node* root, int key) {
    if (root == nullptr) return false;

    if (root->data == key)
        return true;
    else if (key < root->data)
        return searchBST(root->left, key);
    else
        return searchBST(root->right, key);
}

int main() {
    node* root = nullptr;
    int n, value;

    cout << "How many elements you want to insert: ";
    cin >> n;

    cout << "Enter elements one by one:"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insertBST(root, value);
    }

    cout << endl<<"Inorder Traversal: ";
    inorder(root);

    cout << endl<<"Preorder Traversal: ";
    preorder(root);

    cout << endl<<"Postorder Traversal: ";
    postorder(root);

    int key;
    cout << endl<<"Enter element to search: ";
    cin >> key;

    if (searchBST(root, key))
        cout << "Element found in BST"<<endl;
    else
        cout << "Element not found in BST"<<endl;

    return 0;
}
