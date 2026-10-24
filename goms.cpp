/*#include <iostream>
using namespace std;



struct Queue
{
    int frnt;
    int rear;
    int *arr;
    int maxsize;



    Queue(int s)
    {
        maxsize = s;
        arr = new int[maxsize];
        frnt = -1;
        rear = -1;
    }



    bool isEmpty()
    {
        return (frnt==-1 && rear==-1);
    }



    bool isFull()
    {
        return (rear ==( maxsize-1));
    }



    void enqueue(int x)
    {
        if(isFull())
        {
            cout << "Can not enqueue. Queue is Full" << endl;
            return;
        }
        if(isEmpty())
        {
            //cout << "Inserting in empty queue" << endl;
            frnt = 0;
            rear = 0;
            arr[rear] = x;
        }
        else
        {
            rear++;
            arr[rear] = x;
        }
    }



    void dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is empty. Can not dequeue" << endl;
            return;
        }
        if(frnt == rear)
        {
            cout << "Removing only element" << endl;
            frnt = -1;
            rear = -1;
        }
        else
        {
            frnt++;
        }
    }



    int showfront()
    {
        return arr[frnt];
    }
    int showrear()
    {
        return arr[rear];
    }
    void print()
    {
        if(isEmpty())
        {
            return;
        }
        for(int i=frnt; i<=rear; i++)
        {
            cout << arr[i] << "  ";
        }
    }
    bool value_search(int x)
    {
        for(int i=frnt; i<=rear; i++)
        {
            if(arr[i] == x)
            {
                cout << "Found " << x << " in index: " << i << endl;
                return true;
            }
        }
        cout << "Not found" << endl;
        return false;
    }
};

int main()
{
    Queue q1(5);
    Queue q2(10);
    q1.enqueue(3);
    q1.enqueue(5);
    q1.enqueue(1);
    //q1.print();
    q2.enqueue(9);
    //q2.print();
    //cout << endl << q1.showrear() << endl;



    if(q1.value_search(3))
        cout << "Found" << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;

struct Queue
{
    int frnt;
    int rear;
    int *arr;
    int maxsize;

    Queue(int s)
    {
        maxsize = s;
        arr = new int[maxsize];
        frnt = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return (frnt==-1 && rear==-1);
    }

    bool isFull()
    {
        return (((rear+1)%maxsize) == frnt) ;
    }

    void enqueue(int x)
    {
        if(isFull())
        {
            cout << "Can not enqueue. Queue is Full" << endl;
            return;
        }
        if(isEmpty())
        {
            //cout << "Inserting in empty queue" << endl;
            frnt = 0;
            rear = 0;
            arr[rear] = x;
        }
        else
        {
            rear = (rear+1)%maxsize;
            arr[rear] = x;
        }
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is empty. Can not dequeue" << endl;
            return;
        }
        if(frnt == rear)
        {
            cout << "Removing only element" << endl;
            frnt = -1;
            rear = -1;
        }
        else
        {
            frnt = (frnt+1)%maxsize;
        }
    }
    int showfront()
    {
        return arr[frnt];
    }
    int showrear()
    {
        return arr[rear];
    }
    void print()
    {
        if(isEmpty()) {return;}
        if(frnt<=rear){
                for(int i=frnt; i<=rear; i++){
                cout << arr[i] << "  ";
                }
        }
        else{
            cout << "Frnt is larger than rear" << endl;

            for(int i=frnt; i<maxsize; i++){ cout << arr[i] << "   ";}
            for(int i=0; i<=rear; i++){cout << arr[i] << "   ";}
        }
    }
};


int main()
{
    Queue q1(5);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(5);
    q1.enqueue(4);
    q1.enqueue(1);
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(7);
    q1.enqueue(9);
    q1.print();


    return 0;
}*/
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;

    node(){
        this->data = 0;
        this->next = NULL;
    }
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist
{
    node *head;
public:
    Linkedlist()
    {
        head = NULL;
    }
    void insertAtHead(int data)
    {
        node *newnode = new node();
        newnode->data = data;
        newnode->next = NULL;

        if(head==NULL)
        {
            head = newnode;
            return;
        }
        newnode->next = this->head;
        this->head = newnode;
    }
    void InsertAtPos(int data, int pos)
    {
        node *newnode = new node();
        node *curr = head;
        newnode->data = data;
        newnode->next = NULL;

        if(pos==0)
        {
            newnode->next = head;
            head = newnode;
            return;
        }
        for (int i = 0; curr != NULL && i < pos - 1; i++) {
            curr = curr->next;
        }
        if (curr == NULL) {
            cout << "Position out of bounds." << endl;
            return;
        }
        newnode->next = curr->next;
        curr->next = newnode;
    }
    void InsertAtEnd(int data)
    {
        node *newnode = new node();
        node *curr = head;
        newnode->data = data;
        newnode->next = NULL;

         if (head == NULL) {
            head = newnode;
            return;
         }
         while (curr->next != NULL) {
            curr = curr->next;
         }
         curr->next = newnode;
    }
    void deleteHead() {
        if (head == NULL) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }

        // Store current head in a temporary variable
        node *temp = head;

        // Move head to the next node
        head = head->next;

        // Delete the old head node
        delete temp;
    }
    void deleteTail() {

        // Check if the list is empty
        if (head == NULL) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }

        // Check if it contains only one element
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        // Traverse to the tail node
        node* curr = head;
        while (curr->next->next != NULL) {
            curr = curr->next;
        }

        // delete the tail node
        delete curr->next;
        curr->next = NULL;
    }

    void deleteAtPosition(int pos) {
        if (head == NULL || pos < 0) {
            cout << "Invalid position or list is empty." << endl;
            return;
        }

        // Deleting head node
        if (pos == 0) {
            node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Traverse to the node before the target position
        node* current = head;
        for (int i = 1; i < pos - 1 && current != NULL; i++) {
            current = current->next;
        }

        // If position is greater than the number of nodes
        if (current == NULL || current->next == NULL) {
            cout << "Position exceeds list length." << endl;
            return;
        }

        // Delete the node at the target position
        node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }
    void search_element(int data)
    {
        node *curr = head;

        if(head==NULL)
        {
            cout << "List Empty" << endl;
            return;
        }
        while(curr != NULL)
        {
            if(curr->data = data)
            {
                cout << "Found" << endl;
                return;
            }
            curr = curr->next;
        }
        cout << "Not found" << endl;
    }
    void printList()
    {
        node *curr = head;

        if(head==NULL)
        {
            cout << "List Empty" << endl;
            return;
        }
        while(curr != NULL)
        {

            cout << curr->data << " -> ";
            curr = curr->next;
        }
    }
};

int main()
{
    Linkedlist L; //head=NULL

    L.insertAtHead(3); //3->
    L.InsertAtEnd(4);
    L.InsertAtPos(2,1);
    //3->2->4
    L.deleteHead();
    L.deleteTail();
    L.printList();
    return 0;
}
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
}*/





