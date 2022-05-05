//
// Created by Administrator on 2022/4/15.
//

#include <iostream>
#include <vector>
#include <string.h>
#include <unordered_set>
using namespace std;

//dp[i]表示前i位是否满足拆分条件
//递推公式
//初始化条件

bool wordBreak(string s, vector<string>& wordDict) {
    int n = s.size();
    int dp[n+1];
    memset(dp, 0, sizeof(dp));
    //将单词表存入unordered_set便于查找
    unordered_set<string> set(wordDict.begin(), wordDict.end());
    //初始化条件
    dp[0] = true;
    //递推公式
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            if( dp[j] && set.count(s.substr(j, i-j)) ) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];
}

int main() {
    string s = "catsandog";
    vector<string>wordDict = {"cats", "dog", "sand", "and", "cat"};
    cout << wordBreak(s, wordDict);
    return 0;
}