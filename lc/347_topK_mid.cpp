//
// Created by Administrator on 2022/4/10.
//

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

//自定义递减排序
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int, int>m;
    vector<int> re;
    for(int i = 0; i < nums.size(); i++) {
        m[nums[i]] ++;
    }
    vector< pair<int, int> > vec;
    for(auto it = m.begin(); it != m.end(); it++) {
        vec.push_back( pair<int, int> (it->first, it->second) );
    }
    sort(vec.begin(), vec.end(), cmp);
    for(int i = 0; i < k; i++) {
        re.push_back(vec[i].first);
    }
    return re;
}

int main() {
    int a[] = {1,5,17,17,18,18,5};
    int k = 3;
    vector<int> nums(a, a + 7);
    vector<int> re = topKFrequent(nums, k);
    for(int i = 0; i < k; i++) {
        cout << re[i] << ' ';
    }
    return 0;
}