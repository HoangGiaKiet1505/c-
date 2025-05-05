#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
using namespace std;

const int MAX = 100;
vector<int> adj[MAX];
bool visited[MAX];

void BFS(int start) {
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                // In ra c?nh c?a c�y khung BFS
                cout << u << " - " << v << endl;
            }
        }
    }
}

int main() {
    ifstream file("input.txt");
    int n, m; // s? �?nh, s? c?nh
    file >> n >> m;

    // �?c d? li?u �? th?
    for (int i = 0; i < m; ++i) {
        int u, v;
        file >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // N?u l� �? th? v� h�?ng
    }

    // Kh?i t?o m?ng visited
    for (int i = 0; i < n; ++i) visited[i] = false;

    cout << "Cac canh cua cay khung BFS:" << endl;
    BFS(0); // B?t �?u t? �?nh 0

    return 0;
}

