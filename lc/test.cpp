//
// Created by Administrator on 2022/4/15.
//

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int package(vector<int> nums, int sum) {
    int m = nums.size();
    int n = sum+1;
    int dp[m][n]; //dp[i][j]表示0-i的物品放入容量j的背包得到的最大价值
    memset(dp, 0, sizeof(dp));

    //初始化
    for(int i = 0; i < m; i++) {
        dp[i][0] = 0;
    }
    for(int j = nums[0]; j <= n-1; j++) {
        dp[0][j] = nums[0];
    }

    //递推顺序
    for(int i = 1; i < m; i++) {
        for(int j = 1; j <= n-1; j++) {
            if(j < nums[i]) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-nums[i]] + nums[i]);
        }
    }

    //遍历打印
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }
    return dp[m-1][n-1];
}

int main() {
    vector<int> nums = {1,5,11,5};
    int sum = 11;
    cout << package(nums,sum);
    return 0;
}