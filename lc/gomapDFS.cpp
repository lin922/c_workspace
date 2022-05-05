//
// Created by Administrator on 2022/4/18.
//
#include<iostream>
#include<vector>
using namespace std;

int ans = INT8_MAX;
int s[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

void DFS(int i, int j, vector<vector<int>>& map, vector<vector<int>> flag, int step) {
    int n = map.size();
    int m = map[0].size();
    //终止条件
    if(i == n-1 && j == m-1) {
        cout << "----------";
        if(step < ans) ans = step;
        return;
    }

    //循环
    for(int t = 0; t < 4; t++) {
        if(i+s[t][0] >= 0 && i+s[t][0] < n && j+s[t][1] >= 0 && j+s[t][1] < m
           && flag[i+s[t][0]][j+s[t][1]] == 0 && map[i+s[t][0]][j+s[t][1]] == 0){
            flag[i+s[t][0]][j+s[t][1]] = 1;
            DFS(i+s[t][0], j+s[t][1], map, flag, step+1);
            flag[i+s[t][0]][j+s[t][1]] = 0;
        }
    }
}

int main() {
    vector<vector<int>> map = {{0,1,0,0,0},
                               {0,1,0,1,0},
                               {0,0,0,0,0},
                               {0,1,1,1,0},
                               {0,0,0,1,0}};
    int n = map.size();
    int m = map[0].size();
    vector<vector<int>> flag(n, vector<int>(m, 0));
    DFS(0, 0, map, flag, 0);
    cout << ans;
    return 0;
}
