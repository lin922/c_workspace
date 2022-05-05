//
// Created by Administrator on 2022/4/18.
//
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int s[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
struct Node {
    int nx;
    int ny;
    Node(int x, int y) : nx(x), ny(y) {}
};

// 00存入队列，填入步数，上下左右扩张（未超出边界0&&map是0&&没走过）
// 00出队，可以入的入队，遍历几个点，步数加一，上下左右扩张，几个点出队，其余入队。
void BFS(vector<vector<int>>& map, vector<vector<int>>& step) {
    int n = map.size(), m = map[0].size();
    queue<Node*> q;
    step[0][0] = 0;
    q.push(new Node(0, 0));
    while(!q.empty()) {
        Node* node = q.front();
        q.pop();
        if(node->nx == n-1 && node->ny == m-1) break;
        for(int t = 0; t < 4; t++) {
            int x = node->nx + s[t][0];
            int y = node->ny + s[t][1];
            if(x >= 0 && x < n && y >= 0 && y < m && step[x][y] == -1 && map[x][y] == 0) {
                q.push(new Node(x, y));
                step[x][y] = step[node->nx][node->ny] + 1;
            }
        }
    }
}

int main() {
    vector<vector<int>> map = {{0,1,0,0,0},
                               {0,1,0,1,0},
                               {0,0,0,1,0},
                               {0,1,1,1,0},
                               {1,0,0,0,0}};
    int n = map.size();
    int m = map[0].size();
    vector<vector<int>> step(n, vector<int>(m, -1));
    BFS(map,step);
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j++) {
            cout << step[i][j] << ' ';
        }
        cout << endl;
    }
    cout << step[n-1][m-1];
    return 0;
}

