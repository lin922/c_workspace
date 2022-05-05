//
// Created by Administrator on 2022/4/15.
//
#include<iostream>
#include<string.h>
using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    string re = s.substr(0,1);
    int dq[n][n];
    memset(dq, 0, sizeof(dq));

    //初始化
    for(int i = 0; i < n; i++) {
        dq[i][i] = 1;
    }

    //递推公式
    int start = 0, end = 0;
    for(int j = 2; j <= n; j++) {//长度为j
        for(int i = 0; i <= n - j; i++) { //开始位置i
            //dq[i][j]表示第i位到第j位是不是回文串
            if(j == 2 && s[i] == s[j+i-1]) {
                dq[i][j+i-1] = 1;
                start = i, end = j;
            }
            else if(dq[i+1][j+i-2] == 1 && s[i] == s[j+i-1]) {
                dq[i][j+i-1] = 1;
                start = i, end = j;
            }
        }
    }
    return s.substr(start, end);
}

int main() {
    string s = "aaaaaaaad";
    cout << longestPalindrome(s);
    return 0;
}
