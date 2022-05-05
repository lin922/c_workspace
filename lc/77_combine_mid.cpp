//
// Created by Administrator on 2022/4/8.
//

#include<iostream>
#include<vector>
using namespace std;

void backtracking(int pos, int n, int k, vector<int>&v, vector<vector<int>>&re) {
    if(v.size() == k) {
        re.push_back(v);
        return;
    }
    for(int i = pos; i <= n; i++) {
        v.push_back(i);
        backtracking(i + 1, n, k, v, re);
        v.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<int> v;
    vector<vector<int>> re;
    backtracking(1, n, k, v, re);
    return re;
}

int main() {
    int n = 3, k = 2;
    vector<vector<int>> re = combine(n, k);
    for(int i = 0; i < re.size(); i++) {
        for(int j = 0; j < re[i].size(); j++) {
            cout << re[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}