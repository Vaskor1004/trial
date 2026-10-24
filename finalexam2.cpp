#include <iostream>
using namespace std;


struct Node
{
    int roll;
    Node *left;
    Node *right;
};

Node* createNode(int value)
{
    Node* newNode = new Node;
    newNode->roll = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* add(Node* root, int value)
{
    if (root == NULL)
        return createNode(value);

    if (value < root->roll)
        root->left = add(root->left, value);
    else
        root->right = add(root->right, value);

    return root;
}

void inorder(Node* root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->roll << " ";
        inorder(root->right);
    }
}

int search_value(Node* root, int key)
{
    if (root == NULL)
        return 0;

    if (root->roll == key)
        return 1;

    if (key < root->roll)
        return search_value(root->left, key);
    else
        return search_value(root->right, key);
}

int main()
{
    Node* root = NULL;
    int n, roll, key;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter roll number: ";
        cin >> roll;
        root = add(root, roll);
    }

    cout <<endl<< "Sorted Roll Numbers (Inorder):"<<endl;
    inorder(root);

    cout <<endl<<endl<< "Enter roll number to search: ";
    cin >> key;

    if (search_value(root, key))
        cout << "Roll number FOUND.";
    else
        cout << "Roll number NOT FOUND.";

    return 0;
}

