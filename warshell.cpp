#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    int graph[10][10], reach[10][10];
    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
            reach[i][j] = graph[i][j];
        }
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (reach[i][j] == 1 || (reach[i][k] && reach[k][j])) {
                    reach[i][j] = 1;
                }
            }
        }
    }
    cout << "\nTransitive Closure Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << reach[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
