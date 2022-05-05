//
// Created by Administrator on 2022/3/25.
//
#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    int mid;
    while(left <= right) {
        mid = left + ((right - left)/2);
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return mid + 1;
}

int main() {
    int a[] = {1,3,5,6};
    vector<int>nums(a, a+6);
    int target = 7;
    cout << searchInsert(nums, target) << endl;
    return 0;
}
