//
// Created by Administrator on 2022/4/11.
//
#include<iostream>
#include<math.h>
using namespace std;

int CountNumbersWithUniqueDigits(int n) {
    if (n == 0) {
        return 1;
    }
    int count = 9;
    for(int j=1; j<n; j++) {
        count = count * (10 - j);
    }
    return count + CountNumbersWithUniqueDigits(n - 1);
}

int main() {
    int n = 3;
    cout << CountNumbersWithUniqueDigits(n);
    return 0;
}
