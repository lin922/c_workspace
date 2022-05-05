//
// Created by Administrator on 2022/4/9.
//

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;


//pos记录当前位置，arr[pos]当前位置的值，flag记录当前位置是否走过,r标识是否找到结果
void backtracking(vector<int>& arr, int flag[], int pos, int &r) {
    //超出数组索引,之前走过该位置
    if(pos < 0 || pos >= arr.size() || flag[pos] == 1) {
        return;
    }
    //走到目的地
    if(arr[pos] == 0) {
        r = 1;
        return;
    }
    flag[pos] = 1;
    backtracking(arr, flag, pos - arr[pos], r);
    backtracking(arr, flag, pos + arr[pos], r);
}

bool canReach(vector<int>& arr, int start) {
    int r = 0;
    int flag[arr.size()];
    memset(flag, 0, arr.size());
    backtracking(arr, flag, start, r);
    if(r == 1) return true;
    return false;
}

int main() {
    int a[] = {4,1,2,2,0};
    int start = 1;
    vector<int>arr(a, a + 5);
    cout << canReach(arr, start);


    return 0;
}