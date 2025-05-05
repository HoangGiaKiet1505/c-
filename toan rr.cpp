#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int matrix[MAX][MAX];  // Ma tr?n k?
bool visited[MAX];     // Ðánh d?u ð? thãm

// Hàm ð?c ma tr?n k? t? file
void readGraphFromFile(const string& filename, int& n) {
    freopen(filename.c_str(), "r", stdin);  // M? file
    int m;  // S? c?nh
    cin >> n >> m;

    // Kh?i t?o ma tr?n v? 0
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            matrix[i][j] = 0;

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;  // V? là ð? th? vô hý?ng
    }

    fclose(stdin);  // Ðóng file
}

// Thu?t toán BFS v?i ma tr?n k?
void BFS(int start, int n) {
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v = 0; v < n; ++v) {
            if (matrix[u][v] && !visited[v]) {
                visited[v] = true;
                cout << u << " - " << v << endl;  // C?nh thu?c cây khung
                q.push(v);
            }
        }
    }
}

int main() {
    int n;
    string filename = "Bai5.txt";

    readGraphFromFile(filename, n);

    // Kh?i t?o m?ng visited
    for (int i = 0; i < n; ++i) visited[i] = false;

    cout << "Các c?nh c?a cây khung (duy?t BFS - ma tr?n k?):\n";
    BFS(0, n);

    return 0;
}

