//1st assingment
#include<iostream>
using namespace std;

class Employee {
public:
    string name;
    string id;
    float salary;

    Employee() {}

    Employee(string x, string y, float z) {
        name = x;
        id = y;
        salary = z;
    }

    void setv(string x, string y, float z) {
        name = x;
        id = y;
        salary = z;
    }

    void display() {
        cout << "name is: " << name << endl;
        cout << "id is: " << id << endl;
        cout << "salary is: " << salary << endl << endl;
    }

    void highest(Employee arr[], int n) {
        int maxindex = 0;
        for(int i = 1; i < n; i++) {
            if(arr[i].salary > arr[maxindex].salary) {
                maxindex = i;
            }
        }
        cout << "showing the display of highest salary person:" << endl;
        arr[maxindex].display();
    }
};

int main() {
    string name, id;
    float salary;
    cout<<"how many employees information you want to store:";
    int n;
    cin>>n;
    Employee e[n];
    cin.ignore();
    for(int i = 0; i < n; i++) {
        cout << "taking information of person " << i + 1 << ":" << endl;
        cout << "enter name: ";
        getline(cin, name);
        cout << "enter id: ";
        getline(cin, id);
        cout << "enter salary: ";
        cin >> salary;
        cin.ignore();
        cout << endl;

        e[i].setv(name, id, salary);
    }

    for(int i = 0; i < n; i++) {
        e[i].display();
    }

    Employee e1;
    e1.highest(e,n);

    return 0;
}
