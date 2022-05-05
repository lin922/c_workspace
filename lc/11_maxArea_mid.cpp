//
// Created by Administrator on 2022/3/28.
//
#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxArea = min(height[left], height[right]) * (right - left);
    while(left < right) {
        if(height[left] < height[right]) left++;
        else if(height[left] > height[right]) right--;
        else{
            left++;
            right--;
        }
        maxArea = max(maxArea, min(height[left], height[right]) * (right - left));
    }
    return maxArea;
}

int main() {
    int a[] = {1,1};
    vector<int> height(a, a+2);
    cout << maxArea(height);
    return 0;
}
