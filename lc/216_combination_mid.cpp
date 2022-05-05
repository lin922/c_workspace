//
// Created by Administrator on 2022/4/8.
//

#include<iostream>
#include<vector>
using namespace std;

//cnt记录当前个数，sum记录当前和，pos记录当前位置
void backtracking(int cnt, int sum, int pos, int k, int n, vector<int>&v, vector<vector<int>>&re) {
    if(cnt >= k || sum >= n) {
        if(cnt == k && sum == n) re.push_back(v);
        return;
    }
    //for(int i = pos; i <= 9; i++) {
    for(int i = pos; i <= (n - sum)/(k - cnt) && i <= 9; i++) {
        v.push_back(i);
        backtracking(cnt + 1, sum + i, i + 1, k, n, v, re);
        v.pop_back();
    }
}

vector<vector<int>> combinationSum3(int k, int n) {
    vector<int> v;
    vector<vector<int>> re;
    backtracking(0, 0, 1, k, n, v, re);
    return re;
}

int main() {

    int n = 9, k = 3;
    vector<vector<int>> re = combinationSum3(k, n);
    for(int i = 0; i < re.size(); i++) {
        for(int j = 0; j < re[i].size(); j++) {
            cout << re[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}