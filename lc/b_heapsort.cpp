//
// Created by Administrator on 2022/4/13.
//
#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i){
    if(i >= n) return;
    int min = i;
    int c1 = 2 * i + 1, c2 = 2 * i + 2;
    if(arr[c1] < arr[min] && c1 < n) min = c1;
    if(arr[c2] < arr[min] && c2 < n) min = c2;
    if(min != i) {
        swap(arr[i], arr[min]);
        heapify(arr, n, min);
    }
}

void build_heap(int arr[], int n) {
    int last_node = n - 1;
    int end = (last_node - 1)/2;
    for(int i = end; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void heap_sort(int arr[], int n) {
    build_heap(arr, n);
    for(int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
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

