#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int graph[5][5] = {
        {0, 2, 4, 0, 0},
        {2, 0, 1, 7, 0},
        {4, 1, 0, 0, 3},
        {0, 7, 0, 0, 1},
        {0, 0, 3, 1, 0}
    };
    int dist[5];
    int visited[5];

    for (int i = 0; i < n; i++) {
        dist[i] = 9999;
        visited[i] = 0;
    }

    int start = 0;
    dist[start] = 0;
    for (int count = 0; count < n - 1; count++) {

        int min = 9999, u;
        for (int i = 0; i < n; i++) {
            if (visited[i] == 0 && dist[i] < min) {
                min = dist[i];
                u = i;
            }
        }
        visited[u] = 1;
        for (int v = 0; v < n; v++) {
            if (graph[u][v] != 0 && visited[v] == 0) {
                if (dist[u] + graph[u][v] < dist[v]) {
                    dist[v] = dist[u] + graph[u][v];
                }
            }
        }
    }
    cout << "Shortest distances from node 0:\n";
    for (int i = 0; i < n; i++) {
        cout << i << " -> " << dist[i] << endl;
    }
    return 0;
}
