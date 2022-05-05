//
// Created by Administrator on 2022/3/25.
//

#include <iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size()-1;
    while(left <= right) {
        int mid = left + (right - left)/2;
        if(nums[mid] < target) left = mid + 1;
        else if(nums[mid] > target) right = mid - 1;
        else return mid;
    }
    return -1;
}

int main() {
    int a[] = {-1,0,3,5,9,12};
    vector<int>nums(a, a+6);
    int target = 8;
    cout << search(nums, target) << endl;
    return 0;
}