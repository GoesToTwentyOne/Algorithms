#include <bits/stdc++.h>
using namespace std;
const int N = 2002;
int n, m;
int maze[N][N];
int visited[N][N];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool is_inside(pair<int, int> coordinate) {
    int x = coordinate.first;
    int y = coordinate.second;
    return (x >= 0 && x < n && y >= 0 && y < m);
}

bool is_wall(pair<int, int> coordinate) {
    int x = coordinate.first;
    int y = coordinate.second;
    return (maze[x][y] == -1);
}

void dfs(pair<int, int> current) {
    visited[current.first][current.second] = 1;
    // cout << current.first << " " << current.second << endl;

    for (int i = 0; i < 4; i++) {
        int new_x = current.first + dx[i];
        int new_y = current.second + dy[i];
        pair<int, int> adj_node = {new_x, new_y};

        if (is_inside(adj_node) && !is_wall(adj_node) && visited[new_x][new_y] == 0) {
            dfs(adj_node);
        }
    }
}

int main() {
    pair<int, int> src, dst;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        
        for (int j = 0; j < m; j++) {
            if (str[j] == '#') {
                maze[i][j] = -1;
            } else if (str[j] == 'A') {
                src = {i, j};
            } else if (str[j] == 'B') {
                dst = {i, j};
            }
        }
    }

    dfs(src);

    if (visited[dst.first][dst.second] == 1) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }

    return 0;
}
