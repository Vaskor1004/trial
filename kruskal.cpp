#include <iostream>
using namespace std;

#define MAX 100

struct Edge {
    int u, v, w;
};
Edge edges[MAX];
int parent[MAX];
int find(int x) {
    if (parent[x] == x)
        return x;
    return find(parent[x]);
}
void unite(int a, int b) {
    int rootA = find(a);
    int rootB = find(b);
    parent[rootA] = rootB;
}
void sortEdges(int e) {
    for (int i = 0; i < e - 1; i++) {
        for (int j = 0; j < e - i - 1; j++) {
            if (edges[j].w > edges[j + 1].w) {
                Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

int main() {
    int v, e;

    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;
    for (int i = 0; i < e; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }
    for (int i = 0; i < v; i++) {
        parent[i] = i;
    }
    sortEdges(e);

    int count = 0;
    int cost = 0;

    cout << "Edges in MST:\n";

    for (int i = 0; i < e; i++) {
        int u = edges[i].u;
        int vtx = edges[i].v;

        if (find(u) != find(vtx)) {
            cout << u << " - " << vtx << " = " << edges[i].w << endl;
            cost += edges[i].w;
            unite(u, vtx);
            count++;
        }

        if (count == v - 1)
            break;
    }
    cout << "Total cost = " << cost << endl;
    return 0;
}
