//
// Created by Administrator on 2022/4/18.
//
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

//dp[i]表示组成i的完全平方数字的个数
int numSquares(int n) {
    int dp[n+1];
    memset(dp, 0, sizeof(dp));
    //初始条件 dp[I^2]=1
    for(int i = 1; i <= sqrt(n); i++) {
        dp[i*i] = 1;
    }
    //递推公式dp[i]=min(dp[i-],dp[],dp[])+1;
    for(int i = 2; i <= n; i++) {
        int min = INT16_MAX;
        for(int j = 1; j <= sqrt(i); j++) {
            //循环找出min
            if(dp[i-j*j] < min) min = dp[i-j*j];
        }
        dp[i] = min + 1;
    }
    for(int i = 0; i <= n; i++) {
        cout << dp[i] << ' ';
    }
    cout << endl;
    return dp[n];
}

int main() {
    int n = 100;
    cout << numSquares(n);
    return 0;
}

