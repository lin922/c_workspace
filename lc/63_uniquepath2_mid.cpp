//
// Created by Administrator on 2022/4/15.
//

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size(); //行数
    int n = obstacleGrid[0].size(); //列数
    int d[m][n];
    memset(d, 0, sizeof(d));

    for(int i = 0; i < m && obstacleGrid[i][0] == 0; i++) {
        d[i][0] = 1;
    }

    for(int i = 0; i < n && obstacleGrid[0][i] == 0; i++) {
        d[0][i] = 1;
    }

    for(int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (obstacleGrid[i][j] != 1) d[i][j] = d[i - 1][j] + d[i][j - 1];
        }
    }
    return d[m - 1][n - 1];
}

int main() {
    vector<vector<int>> obstacleGrid = {{0,0,0},{0,1,0},{0,0,0}};
    cout << uniquePathsWithObstacles(obstacleGrid);
    return 0;
}