
#include <iostream>
using namespace std;

int a[4];
int top = -1;

void finish() {
    exit(0);
}

int push() {
    int x;
    cout << "Enter the element: ";
    cin >> x;

    if (top == 3) {
        cout << "Stack is full" << endl;
    } else {
        top++;
        a[top] = x;
    }

    cout << "------------------------------------------" << endl;
    cout << "Current stack: ";
    for (int i = 0; i <= top; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}

int pop() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        cout << "Current stack has " << -1 << " element" << endl;
        finish();
    } else {
        cout << "Popped element: " << a[top] << endl;
        top--;

        if (top >= 0) {
            cout << "Current stack: ";
            for (int i = 0; i <= top; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
            cout << "------------------------------------------" << endl;
        } else {
            cout << "Current stack is now empty." << endl;
            cout << "------------------------------------------" << endl;
            finish();
        }
    }

    return 0;
}

int main() {
    int k, l, m = 4;

    while (true) {
        cout << "Press 1 for push" << endl;
        cout << "Press 2 for pop" << endl;
        cin >> l;

        if (l == 1) {
            while (m--) {
                cout << "Press 1 to insert" << endl;
                cout << "Press 2 to exit" << endl;
                cin >> k;
                if (k == 1) {
                    push();
                } else {
                    break;
                }
            }
        } else {
            k = 0;
            while (true) {
                cout << "Press 1 to delete" << endl;
                cout << "Press 2 to exit" << endl;
                cin >> k;
                if (k == 1) {
                    pop();
                } else {
                    finish();
                }
            }
        }
    }
}

