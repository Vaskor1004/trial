#include <iostream>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node* left;
    Node* right;
};

Node* createNode(char ch, int freq) {
    Node* n = new Node();
    n->ch = ch;
    n->freq = freq;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void printCode(Node* root, string code) {
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL) {
        cout << root->ch << " : " << code << endl;
    }

    printCode(root->left, code + "0");
    printCode(root->right, code + "1");
}

int main() {


    Node* a = createNode('A', 5);
    Node* b = createNode('B', 9);
    Node* c = createNode('C', 12);
    Node* d = createNode('D', 13);
    Node* e = createNode('E', 16);
    Node* f = createNode('F', 45);

    Node* n1 = createNode('#', a->freq + b->freq);
    n1->left = a;
    n1->right = b;

    Node* n2 = createNode('#', c->freq + d->freq);
    n2->left = c;
    n2->right = d;

    Node* n3 = createNode('#', n1->freq + n2->freq);
    n3->left = n1;
    n3->right = n2;

    Node* n4 = createNode('#', e->freq + f->freq);
    n4->left = e;
    n4->right = f;

    Node* root = createNode('#', n3->freq + n4->freq);
    root->left = n3;
    root->right = n4;

    cout << "Huffman Codes:"<<endl;
    printCode(root, "");

    return 0;
}
