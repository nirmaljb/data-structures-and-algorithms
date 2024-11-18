//
//  upper-bound.cpp
//  Binary Search
//
//  Created by Nirmal Jyoti Biswas on 06/11/24.
//

#include <bits/stdc++.h>
using namespace std;

int upper_bound(vector<int> arr, int k) {
    int n = arr.size();
    int store = n;
    int left = 0, right = n - 1;
    
    while(left <= right) {
        int mid = (left + right) /  2;
        if(arr[mid] > k) {
            store = mid;
            right = mid - 1;
        }else if(arr[mid] <= k) {
            left = mid + 1;
        }
    }
    return store;
}

int main() {
    vector<int> arr = {1,2,2,3};
    int k = 2;
    
    cout << upper_bound(arr, k) << "\n";
    return 0;
}
