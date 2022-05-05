//
// Created by Administrator on 2022/4/13.
//
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

void heapify(int arr[], int n, int i) {
    if(i >= n) return;
    int s1 = 2*i + 1, s2 =2*i + 2;
    int max = i;
    if(arr[s1] > arr[max] && s1 < n) max = s1;
    if(arr[s2] > arr[max] && s2 < n) max = s2;
    if(max != i) {
        swap(arr[max], arr[i]);
        heapify(arr, n, max);
    }
}

//乱序数组构建堆
void build_heap(int arr[], int n) {
    int end_node = n - 1;
    int end_heapify = (end_node - 1)/2;
    for(int i = end_heapify; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

vector<int> topKFrequent(vector<int>& arr, int k) {
    map<int, int>m;
    vector<int> re;
    for(int i = 0; i < arr.size(); i++) {
        m[arr[i]] ++;
    }
    vector< pair<int, int> > vec;
    for(auto it = m.begin(); it != m.end(); it++) {
        vec.push_back( pair<int, int> (it->first, it->second) );
    }
    build_heap(arr, n);
    for(int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]); //交换顶点（最大点）和最后一个点
        re.push_back(vec[i].first);
        heapify(arr, i, 0); //剪去最后一个点
    }
    return re;
}


int main() {
    int a[] = {1,5,17,17,18,18,5};
    int k = 3;
    vector<int> arr(a, a + 7);
    vector<int> re = topKFrequent(arr, k);
    for(int i = 0; i < k; i++) {
        cout << re[i] << ' ';
    }
    return 0;
}