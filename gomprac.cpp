/*#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;

    node(){
        this->data=0;
        this->next=nullptr;
    }
    node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

class linkedlist(){
    node* head;

    linkedlist(){
        head=nullptr;
    }
    void inserthead(int data){

        node* newnode=new node();
        newnode->data=data;
        newnode->next=nullptr;

        if(head==nullptr){
            head=newnode;
            return;
        }
        newnode->next=head;
        head=newnode;
    }
    void insertpos(int data,int pos){
        node* newnode=new node;
        node* curr=head;
        newnode->data=data;
        newnode->next=nullptr;

        if(pos==0){
            newnode->next=head;
            head=newnode;
            return;
        }
        for(int i=0; curr!=nullptr && i<pos-1 ;i++){
            curr=curr->next;
        }
        if(curr==nullptr){
            cout<"out of index "<<endl;
            return;
        }
        newnode->next=curr->next;
        curr->next=newnode;
    }
    void insertend(int data){

        node* newnode=new node;
        node* curr=head;
        newnode->data=data;
        newnode->next=nullptr;

        if(head==nullptr){
            head=newnode;
            return;
        }
        while(curr->next!=nullptr){
            curr=curr->next;
        }
        curr->next=newnode;
    }
    void deletehead()
    {
        if(head==nullptr){return;}

        node* temp=head;

        head=head->next;
        delete temp;
    }
    void deletetail(){
        if(head==nullptr){return;}
        else if(head->next==nullptr){
            delete haed;
            return;
        }
        node* temp=head;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
    }
    void deletepos()
    {
        if(pos==0){
            node* temp=head;
            head=head->next;
            delete temp;
            return;
        }
        node * curr=head;
        for(int i=0; curr!=nullptr && i<pos-1; i++){
            curr=curr->next;
        }
        node* temp=curr->next;
        curr->next=temp->next;
        delete temp;

    }
};
int main()
{

}*/
/*#include<iostream>
using namespace std;
struct Queue{

    int rear;
    int frnt;
    int* arr;
    int maxsize;

    Queue(int s)
    {
        maxsize=s;
        arr=new int[maxsize]
        rear=-1;
        frnt=-1;
    }

    bool isfull(){return ((rear+1)%maxsize==frnt);}
    bool isempty(){return (frnt=-1 && rear=-1);

    void enqueue(int data)
    {
       if(isfull()){return;}
       if (isempty())
       {
           rear=0;
           frnt=0;
           arr[rear]=data;
       }
       else{
        rear=(rear+1)%maxsize;
        arr[rear]=data;
       }
    }
    void dequque(){
        if(isempty()){return;}

        if(frnt==rear)
        {
            frnt=rear=-1;
        }
        else{frnt=(frnt+1)%maxsize;}
    }
    void print(){
       if(isempty()){return;}
       else if(frnt<=rear)
       {
           for(int i=frnt; i<=rear; i++){
            cout<<arr[i]<<" ";
           }
       }
       else{
        for(int i=frnt; i<maxsize; i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<=rear; i++){
            cout<<arr[i]<<" ";
        }
       }
    }
};
int main()
{

}*/
#include <iostream>
using namespace std;

// Node structure for a Binary Search Tree
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new Node
Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node in the BST
Node* insertNode(Node* root, int data)
{
    if (root == NULL) { // If the tree is empty, return a
                           // new node
        return createNode(data);
    }

    // Otherwise, recur down the tree
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    }
    else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    // return the (unchanged) node pointer
    return root;
}

// Function to do inorder traversal of BST
void inorderTraversal(Node* root)
{
    if (root != NULL) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

// Function to search a given key in a given BST
Node* searchNode(Node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->data == key) {
        return root;
    }

    // Key is greater than root's key
    if (root->data < key) {
        return searchNode(root->right, key);
    }

    // Key is smaller than root's key
    return searchNode(root->left, key);
}

// Function to find the inorder successor
Node* minValueNode(Node* node)
{
    Node* current = node;
    // loop down to find the leftmost leaf
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

// Function to delete a node
Node* deleteNode(Node* root, int data)
{
    if (root == NULL)
        return root;

    // If the data to be deleted is smaller than the root's
    // data, then it lies in the left subtree
    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    }
    // If the data to be deleted is greater than the root's
    // data, then it lies in the right subtree
    else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    }
    // if data is same as root's data, then This is the node
    // to be deleted
    else {
        // node with only one child or no child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // node with two children: Get the inorder successor
        // (smallest in the right subtree)
        Node* temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Main function to demonstrate the operations of BST
int main()
{

    Node* root = NULL;
    // create a BST
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    // Print the inorder traversal of a BST
    cout << "Inorder traversal of the given Binary Search "
            "Tree is: ";
    inorderTraversal(root);
    cout << endl;

    // delete a node in BST
    root = deleteNode(root, 20);
    cout << "After deletion of 20: ";
    inorderTraversal(root);
    cout << endl;

    // Insert a node in BST
    root = insertNode(root, 25);
    cout << "After insertion of 25: ";
    inorderTraversal(root);
    cout << endl;

    // Search a key in BST
    Node* found = searchNode(root, 25);

    // check if the key is found or not
    if (found != NULL) {
        cout << "Node 25 found in the BST." << endl;
    }
    else {
        cout << "Node 25 not found in the BST." << endl;
    }

    return 0;
}
