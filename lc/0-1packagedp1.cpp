//
// Created by Administrator on 2022/4/15.
//

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int package(vector<int> weight, vector<int> value, int bagWeight) {
    int m = weight.size();
    int n = bagWeight + 1;
    int dp[n]; //dp[j]表示容量j的背包可以装的最大价值
    memset(dp, 0, sizeof(dp));

    //初始化
    dp[0] = 0;

    //递推顺序
    for(int i = 0; i < m; i++) {
        for(int j = n - 1; j >= weight[i]; j--) {
            dp[j] = max(dp[j], dp[j-weight[i]] + value[i]);
        }
    }

    //遍历打印
    for(int j = 0; j < n; j++) {
        cout << dp[j] << ' ';
    }
    cout << endl;
    return dp[n-1];
}

int main() {
    vector<int> weight = {1, 3, 4};
    vector<int> value = {15, 20, 30};
    int bagWeight = 4;
    cout << package(weight, value, bagWeight);
    return 0;
}