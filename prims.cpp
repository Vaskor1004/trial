#include <iostream>
using namespace std;

#define MAX 100
#define INF 999999

int main() {
    int n;
    int cost[MAX][MAX];
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter cost matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
            if (cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }
    int visited[MAX] = {0};
    visited[0] = 1;
    int edges = 0;
    int mincost = 0;
    cout << "Edges in MST:\n";
    while (edges < n - 1) {
        int min = INF;
        int a = -1, b = -1;
        for (int i = 0; i < n; i++) {
            if (visited[i]) {
                for (int j = 0; j < n; j++) {
                    if (!visited[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        if (a != -1 && b != -1) {
            cout << a << " - " << b << " = " << min << endl;
            mincost += min;
            visited[b] = 1;
            edges++;
        }
    }
    cout << "Total cost = " << mincost << endl;
    return 0;
}
