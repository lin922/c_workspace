//
// Created by Administrator on 2022/4/13.
//
#include<iostream>
using namespace std;

void backtracking(int n, int &res) {
    if(n == 0) {
        res ++;
        return;
    }
    if(n < 0) return;
    backtracking(n - 1, res);
    backtracking(n - 2, res);
}

int main() {
    int res = 0;
    int n = 4;
    backtracking(n, res);
    cout << res;
    return 0;
}