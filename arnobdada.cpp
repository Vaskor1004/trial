#include<iostream>
using namespace std;

const int maxs = 10;

struct Employee {
    string name;
    string dept;
    int id;
    string task[maxs];
    int top;

    Employee() { top = -1; }

    void push(string work) {
        if (top == maxs - 1) {
            cout << "Task stack full for " << name << endl;
        } else {
            task[++top] = work;
            cout << "Task added to " << name << endl;
        }
    }

    void pop() {
        if (top == -1)
            cout << name << " has no task"<<endl;
        else {
            cout << name << " completed: " << task[top] << endl;
            top--;
        }
    }

    void show_all_task() {
        if (top == -1)
            cout << name << " has no tasks"<<endl;
        else {
            cout <<endl<< "Tasks of " << name << ":"<<endl;
            for (int i = top; i >= 0; i--)
                cout << "- " << task[i] << endl;
        }
    }
};


struct EmpNode {
    Employee data;
    EmpNode* next;
    EmpNode* prev;
};

struct EmployeeList {
    EmpNode* head;
    EmpNode* tail;

    EmployeeList() { head = tail = NULL; }

    void addEmployee(Employee e) {
        EmpNode* n = new EmpNode;
        n->data = e;
        n->next = n->prev = NULL;

        if (head == NULL) {
            head = tail = n;
        } else {
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
    }

    EmpNode* findById(int id) {
        EmpNode* t = head;
        while (t != NULL) {
            if (t->data.id == id)
                return t;
            t = t->next;
        }
        return NULL;
    }

    void showEmployees() {
        EmpNode* t = head;
        cout <<endl<< "Employees:"<<endl;
        while (t != NULL) {
            cout << "ID: " << t->data.id
                 << " Name: " << t->data.name
                 << " Dept: " << t->data.dept << endl;
            t = t->next;
        }
    }
};


struct Client_task {
    int frnt, rear, mxsz;
    string* arr;

    Client_task(int s) {
        mxsz = s;
        arr = new string[mxsz];
        frnt = rear = -1;
    }

    bool isempty() { return (frnt == -1 && rear == -1); }
    bool isfull() { return ((rear + 1) % mxsz == frnt); }

    void enqueue(string x) {
        if (isfull()) {
            cout << "Client queue full"<<endl;
            return;
        }
        if (isempty())
            frnt = rear = 0;
        else
            rear = (rear + 1) % mxsz;

        arr[rear] = x;
        cout << "Client task added"<<endl;
    }

    string dequeue() {
        if (isempty()) return "";

        string val = arr[frnt];

        if (frnt == rear)
            frnt = rear = -1;
        else
            frnt = (frnt + 1) % mxsz;

        return val;
    }
};


int main() {

    EmployeeList company;

    int n;
    cout<<"enter how many employee want to add:";
    cin>>n;
    Employee e[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter ID: ";
        cin >> e[i].id;
        cout << "Enter Name: ";
        cin >> e[i].name;
        cout << "Enter Dept: ";
        cin >> e[i].dept;
        company.addEmployee(e[i]);
    }

    company.showEmployees();


    EmpNode* curr = company.head;
    cin.ignore();
    cout <<endl<< "Enter one initial task for each employee"<<endl;
    while (curr != NULL) {
        string t;
        cout << "Task for " << curr->data.name << ": ";
        getline(cin, t);
        curr->data.push(t);
        curr = curr->next;
    }


    Client_task q(10);
    q.enqueue("Client Bug");
    q.enqueue("Website Update");
    q.enqueue("Security Check");


    EmpNode* temp = company.head;
    while (!q.isempty()) {
        string t = q.dequeue();
        if (temp == NULL) temp = company.head;
        temp->data.push(t);
        temp = temp->next;
    }


    int choice = -1;

    while (choice != 0) {
        cout << endl<<"n1. Show employees"<<endl;
        cout << "2. Show tasks of an employee"<<endl;
        cout << "3. Add task to employee"<<endl;
        cout << "4. Complete task"<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            company.showEmployees();
        }
        else if (choice == 2) {
            int id;
            cout << "Enter employee id: ";
            cin >> id;
            EmpNode* e = company.findById(id);
            if (e != NULL)
                e->data.show_all_task();
            else
                cout << "Employee not found"<<endl;
        }
        else if (choice == 3) {
            int id;
            string t;
            cout << "Enter employee id: ";
            cin >> id;
            cin.ignore();
            cout << "Enter task: ";
            getline(cin, t);

            EmpNode* e = company.findById(id);
            if (e != NULL)
                e->data.push(t);
            else
                cout << "Employee not found"<<endl;
        }
        else if (choice == 4) {
            int id;
            cout << "Enter employee id: ";
            cin >> id;
            EmpNode* e = company.findById(id);
            if (e != NULL)
                e->data.pop();
            else
                cout << "Employee not found"<<endl;
        }
    }

    cout << "Program Ended"<<endl;
}
