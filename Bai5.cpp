#include <bits/stdc++.h> 
using namespace std;

const int MAX = 100;              // Số đỉnh tối đa của đồ thị
vector<int> adj[MAX];            // Danh sách kề: adj[u] chứa các đỉnh kề với u
bool visited[MAX];               // Mảng đánh dấu các đỉnh đã được thăm

// Hàm đọc dữ liệu đồ thị từ file
void readGraphFromFile(const string& filename, int& n) {
    freopen(filename.c_str(), "r", stdin); // Mở file để đọc vào từ chuẩn input
    int m;                                 // m là số cạnh
    cin >> n >> m;                         // Đọc số đỉnh và số cạnh

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;                    // Đọc 1 cạnh nối u và v
        adj[u].push_back(v);             // Thêm v vào danh sách kề của u
        adj[v].push_back(u);             // Thêm u vào danh sách kề của v (vì đồ thị vô hướng)
    }

    fclose(stdin);                       // Đóng file lại
}

// Hàm thực hiện thuật toán BFS bắt đầu từ đỉnh 'start'
// In ra các cạnh của cây khung tạo được trong quá trình duyệt
void BFS(int start) {
    queue<int> q;              // Hàng đợi hỗ trợ BFS
    visited[start] = true;     // Đánh dấu đỉnh bắt đầu là đã thăm
    q.push(start);             // Thêm đỉnh bắt đầu vào hàng đợi

    while (!q.empty()) {
        int u = q.front();     // Lấy đỉnh đầu hàng đợi
        q.pop();               // Loại bỏ đỉnh đó khỏi hàng đợi

        for (int v : adj[u]) {       // Duyệt qua tất cả các đỉnh kề với u
            if (!visited[v]) {       // Nếu đỉnh v chưa được thăm
                visited[v] = true;   // Đánh dấu v là đã thăm
                cout << u << " - " << v << endl; // In ra cạnh thuộc cây khung
                q.push(v);           // Thêm v vào hàng đợi để tiếp tục duyệt
            }
        }
    }
}

int main() {
    int n;                             // Số đỉnh của đồ thị
    string filename = "Bai5.txt";      // Tên file chứa dữ liệu đồ thị

    readGraphFromFile(filename, n);    // Đọc đồ thị từ file

    // Khởi tạo mảng visited: tất cả các đỉnh đều chưa được thăm
    for (int i = 0; i < n; ++i) visited[i] = false;

    cout << "Cac canh cua cay khung (duyet BFS):\n";
    BFS(0);                            // Bắt đầu BFS từ đỉnh 0

    return 0;                          
}
