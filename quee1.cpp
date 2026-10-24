/*#include<iostream>
using namespace std;
int top=-1;
void finish(){exit(0);}
void enque(int a[],int n,int x){
    if(top==n-1){
            cout<<"------------------------------------------"<<endl;
            cout<<"Que is full"<<endl;
            cout<<"Current que:";
            for(int i=0;i<=top;i++){
            cout<<a[i]<<" ";
    }
    cout<<endl<<"---------------------------------------"<<endl;


        finish();
    }
    else{
        top++;
        a[top]=x;
    }
    cout<<"------------------------------------------"<<endl;
    cout<<"Current que:";
    for(int i=0;i<=top;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"---------------------------------------"<<endl;

}
void dequee(int a[])
{
    if(top<0){
        cout<<"Que is empty"<<endl;
        finish();
    }
    else{
        for(int i=0;i<top;i++){
            a[i]=a[i+1];
        }
        top--;
    }
    cout<<"------------------------------------------"<<endl;
    cout<<"Current que:";
    for(int i=0;i<=top;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"---------------------------------------"<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    while(true){
            short s;
    cout<<"Press 1 to insert"<<endl;
    cout<<"Press 2 to delete"<<endl;
    cout<<"Press 3 to exit"<<endl;
    cin>>s;
    if(s==1){
            int x;
    cout<<"Enter the eleemnt:";
    cin>>x;
    enque(a,n,x);
    }
    else if(s==2){dequee(a);}
    else{finish();}
    }
}*/
#include <iostream>
using namespace std;

int front = -1, rear = -1;

void display(int a[]) {
    if (front == -1)
        cout << "Queue is empty" << endl;
    else {
        cout << "------------------------------------------" << endl;
        cout << "Current queue: ";
        for (int i = front; i <= rear; i++)
            cout << a[i] << " ";
        cout << endl << "------------------------------------------" << endl;
    }
}

void enqueue(int a[], int n, int x) {
    if (rear == n - 1) {
        cout << "Queue is full!" << endl;
        display(a);
        return;
    }
    if (front == -1) front = 0;
    a[++rear] = x;
    display(a);
}

void dequeue(int a[]) {
    if (front == -1) {
        cout << "Queue is empty!" << endl;
        return;
    }
    front++;
    if (front > rear) front = rear = -1;
    display(a);
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int a[n];

    while (true) {
        short s;
        cout << "Press 1 to insert" << endl;
        cout << "Press 2 to delete" << endl;
        cout << "Press 3 to exit" << endl;
        cin >> s;

        if (s == 1) {
            int x;
            cout << "Enter the element: ";
            cin >> x;
            enqueue(a, n, x);
        } else if (s == 2) {
            dequeue(a);
        } else {
            cout << "Exiting..." << endl;
            break;
        }
    }
}

