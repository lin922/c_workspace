//
// Created by Administrator on 2022/3/25.
//
#include<iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> re(2,-1);
    int left = 0, right = nums.size() - 1;
    int mid;
    int rightBorder = -2, leftBorder = -2;

    //寻找右边界,不包含target的右边界
    while(left <= right) {
        mid = left + ((right - left)/2);
        if(nums[mid] <= target) {
            left = mid + 1;
            rightBorder = left;
        }
        else {
            right = mid - 1;
        }
    }

    //寻找左边界,不包含target的左边界
    left = 0, right = nums.size() - 1;
    while(left <= right) {
        mid = left + ((right - left)/2);
        if(nums[mid] >= target) {
            right = mid - 1;
            leftBorder = right;
        }
        else {
            left = mid + 1;
        }
    }

    //判断情况
    //1.target存在
    if(rightBorder - leftBorder > 1) {
        re[0] = leftBorder + 1;
        re[1] = rightBorder - 1;
    }
    //2.target不存在
    return re;
}

int main() {
    int a[] = {5,7,7,8,8,8,10};
    vector<int>nums(a, a+7);
    int target = 10;
    vector<int> v;
    v = searchRange(nums, target);
    cout << v[0] << ' ' << v[1];
    return 0;
}
