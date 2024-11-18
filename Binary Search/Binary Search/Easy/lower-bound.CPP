//
//  lower-bound.CPP
//  Binary Search
//
//  Created by Nirmal Jyoti Biswas on 06/11/24.
//

#include <bits/stdc++.h>
using namespace std;

int solve_linear(vector<int> arr, int k) {
    int store = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] <= k) {
            store = max(store, i);
        }
    }
    return store;
}

int solve(vector<int> arr, int k) {
    
    int n = arr.size();
    int store = n;
    int left = 0, right = n - 1, mid = 0;
    
    while(left <= right) {
        mid = (left + right) / 2;
        if(arr[mid] >= k) {
            store = mid;
            right = mid - 1;
        }else if(arr[mid] < k) {
            left = mid + 1;
        }
    }
    
    return store;
}

int main() {
    vector<int> arr = {3,5,8,15,19};
    int k = 9;
    
    cout << solve(arr, k) << "\n";
    return 0;
}
