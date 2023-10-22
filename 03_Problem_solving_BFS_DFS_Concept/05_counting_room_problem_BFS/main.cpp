#include <bits/stdc++.h>
using namespace std;

const int N = 2002;
int maze[N][N];
int visited[N][N];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int n, m;
pair<int, int> src, dst;

bool is_inside(pair<int, int> coordinate) {
    int x = coordinate.first;
    int y = coordinate.second;
    return (x >= 0 && x < n && y >= 0 && y < m);
}

bool is_wall(pair<int, int> coordinate) {
    int x = coordinate.first;
    int y = coordinate.second;
    if (maze[x][y] == -1){
        return true;
    }
    return false;
}

void bfs(pair<int, int> src) {
    queue<pair<int, int>> q;
    visited[src.first][src.second] = 1;
    q.push(src);

    while (!q.empty()) {
        pair<int, int> head = q.front();
        int x = head.first;
        int y = head.second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            pair<int, int> adj_node = {new_x, new_y};

            if (is_inside(adj_node) && !is_wall(adj_node) && visited[new_x][new_y] == 0) {
                visited[new_x][new_y] = 1;
                q.push(adj_node);
            }
        }
    }
}
pair<int, int> unvisited_coordinate() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited[i][j] == 0 && maze[i][j] == 0) {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int main() {
    cin >> n >> m;
    int count = 0;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++) {
            if (str[j] == '#') {
                maze[i][j] = -1;
            }
        }
    }
    int room_cout=0;
while(1){
    pair<int,int> unvisited_pos=unvisited_coordinate();
    if(unvisited_pos == pair<int,int>(-1,-1)){
        break;
    }
    bfs(unvisited_pos);
    room_cout++;

}
cout<<room_cout<<'\n';
}



