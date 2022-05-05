//
// Created by Administrator on 2022/4/12.
//

#include<iostream>
using namespace std;

//heapify的前提是要做heapify的节点，它的所有子树都是heap
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

//堆排序 小顶堆
//每次做heapify的点都会变成最大点
void heap_sort(int arr[], int n) {
    build_heap(arr, n);
    for(int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]); //交换顶点（最大点）和最后一个点
        heapify(arr, i, 0); //剪去最后一个点
    }
}


int main() {
    int arr[] = {2, 5, 3, 1, 10, 4};
    int n = 6;
    build_heap(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    heap_sort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}