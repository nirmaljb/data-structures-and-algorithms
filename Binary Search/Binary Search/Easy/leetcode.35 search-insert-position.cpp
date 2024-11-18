//
//  leetcode.35 search-insert-position.cpp
//  Binary Search
//
//  Created by Nirmal Jyoti Biswas on 06/11/24.
//

#include <bits/stdc++.h>
using namespace std;

int search_insert_linear(vector<int> arr, int target) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] >= target) {
            return i;
        }
    }
    return n;
}

int search_insert_binary(vector<int> arr, int target) {
    int n = arr.size();
    int left = 0, right = n - 1;
    int store = n;
    
    while(left <= right) {
        int mid = (left + right) / 2;
        if(arr[mid] == target) {
            return mid;
        }else if(arr[mid] > target) {
            store = mid + 1;
            left = mid + 1;
        }else if(arr[mid] < target) {
            right = mid - 1;
        }
    }
    
    return store;
}

int main() {
    cout << "Hello, World" << "\n";
    return 0;
}
