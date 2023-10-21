#include<bits/stdc++.h>
using namespace std;

const int N = 2002;
int n, m;
int maze[N][N];
int visited[N][N];
int level[N][N];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
bool is_inside(pair<int, int> coordinate) {
    if (coordinate.first >= 0 && coordinate.first < n && coordinate.second >= 0 && coordinate.second < m) {
        return true;
    }
    return false;
}
bool is_wall(pair<int, int> coordinate) {
    if (maze[coordinate.first][coordinate.second] == -1) {
        return true;
    }
    return false;
}
void bfs(pair<int, int> src) {
    queue<pair<int, int>> q;
    visited[src.first][src.second] = 1;
    q.push(src);
    level[src.first][src.second] = 0;
    while (!q.empty()) {
        pair<int, int> head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;
        for (int i = 0; i < 4; i++) {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            pair<int, int> adj_node = {new_x, new_y};
            if (is_inside(adj_node) && !is_wall(adj_node) && visited[new_x][new_y] == 0) {
                visited[new_x][new_y] = 1;
                level[new_x][new_y] = level[x][y] + 1;
                q.push(adj_node);
            }
        }
    }
}
/*
bool is_inside(pair<int, int>coord) {
    int x = coord.first;
    int y = coord.second;

    if(x >= 0 && x < n && y >= 0 &&  y < m) {
        return true;
    }
    return false;
}

bool is_safe(pair<int, int>coord) {
    int x = coord.first;
    int y = coord.second;
    if(maze[x][y] == -1) {
        return false;
    }
    return true;
}

5 8
########
#.A#...#
#.##.#B#
#......#
########

Output -> 9

# -> -1
. -> 0

(5,6) --> right -> (5,7)
(5,6) --> left  -> (5, 5)
(5,6)  -> up ---> (4,6)
(5,6) ---> down --> (6,6)

(x,y) -> right -> (x, y + 1)
     -> left   -> (x, y - 1)
     -> up    ->  (x - 1, y)
     -> down   -> (x + 1, y)


x  y
-  -
0  1
0  -1
-1  0
1   0

dx[] = {0, 0, -1, 1}
dy[] = {1, -1, 0, 0}

for(int i = 0 ; i < 4 ; i++) {
    int new_x = x + dx[i];
    int new_y = y + dy[i];
}


1. is the cell within the maze
2. is the cell forbidden / wall?
3. is the cell visited?


*/

int main() {
    pair<int, int> src, dst;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++) {
            if (str[j] == '#') {
                maze[i][j] = -1;
            }
            else if (str[j] == 'A') {
                src = {i, j};
            }
            else if (str[j] == 'B') {
                dst = {i, j};
            }
        }
    }
for(int i = 0 ; i < n ; i++) {
    for(int j = 0; j < m ; j++) {
            cout<<maze[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    bfs(src);
    if (visited[dst.first][dst.second] == 0) {
        cout << "NO" << '\n';
    }
    else {
        cout << "YES" << '\n';
        cout << level[dst.first][dst.second] << '\n';
    }
    return 0;
}
