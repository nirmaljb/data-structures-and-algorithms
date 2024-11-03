#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> arr, int target) {
    //hashmap
//    unordered_map<int, int> store;
//    int n = arr.size();
//    int rem = 0;
//    
//    for(int i = 0; i < n; i++) {
//        rem = k - arr[i];
//        if(store.find(rem) != store.end()) {
//            return { store[rem], i};
//        }else {
//            store[arr[i]] = i;
//        }
//    }
//    
//    return {-1,-1};
    
    //two pointer
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    
    while(left < right) {
        int sum = arr[left] + arr[right];
        if(sum == target) {
            return {left, right};
        }else if(sum > target) {
            right--;
        }else {
            left++;
        }
    }
    return {-1,-1};
}

int main() {
    vector<int> arr = {3,2,4};
    vector<int> response = solve(arr, 6);
    
    for(auto it: response) {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}
