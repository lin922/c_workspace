//
// Created by Administrator on 2022/3/29.
//

//
// Created by Administrator on 2022/3/28.
//
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int integerReplacement(int n) {
        int cnt = 0;
        long long m = n;
        while(m != 1) {
            if(m == 3) {
                cnt += 2;
                break;
            }
            else {
                if(m % 2 == 0) m /= 2;
                else {
                    if((m + 1) / 2 % 2 == 0) m += 1;
                    else m -= 1;
                }
                cnt ++;
            }
        }
        return cnt;
    }
};

int main() {
    int n = 99;
    Solution solution1;
    cout << solution1.integerReplacement(n);
    return 0;
}
//53 52 26 13 12 6 3 2 1
