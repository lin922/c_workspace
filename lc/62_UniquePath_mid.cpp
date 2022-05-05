//
// Created by Administrator on 2022/4/14.
//
#include<iostream>
#include<string.h>
using namespace std;

int uniquepath(int m, int n) {
    int d[m][n];
    memset(d, 0, sizeof(d));

    for(int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(i == 0 || j == 0) {
                d[i][0] = 1;
                d[0][j] = 1;
            }
            else d[i][j] = d[i-1][j] + d[i][j-1];
        }
    }
    return d[m - 1][n - 1];
}

int main() {
    int m = 3, n = 2;
    cout << uniquepath(m, n);
    return 0;
}