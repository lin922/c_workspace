//
// Created by Administrator on 2022/3/25.
//
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

//排序规则
bool cmp(int a, int b)
{
    string s1, s2;
    s1 = to_string(a) + to_string(b);
    s2 = to_string(b) + to_string(a);
    if(s1 < s2) return false;
    else return true;
}

int main() {
    int a[10] = {3,30,34,5,9};
    string s;
    vector<int> nums(a, a + 5);
    sort(nums.begin(), nums.end(), cmp);
    for(int i = 0; i < nums.size(); i++) {
        s += to_string(nums[i]);
    }
    cout << s;
    return 0;
}



