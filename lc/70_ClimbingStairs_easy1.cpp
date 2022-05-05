//
// Created by Administrator on 2022/4/13.
//

#include<iostream>
using namespace std;

int climbStairs(int n) {
    int a[n];
    a[0] = 1;
    a[1] = 1;
    for(int i = 2; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    return a[n];
}
int main() {
    int n = 4;
    cout << climbStairs(n);
    return 0;
}