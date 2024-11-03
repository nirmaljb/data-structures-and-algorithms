//
//  leetcode.75.CPP
//  Arrays
//
//  Created by Nirmal Jyoti Biswas on 30/10/24.
//

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr) {
    //hashing
//    map<int, int> store;
//    
//    for(auto it: arr) {
//        store[it]++;
//    }
//    
//    arr.clear();
//    
//    
//    for(const auto& [value, count]: store) {
//        arr.insert(arr.end(), count, value);
//    }
    //dutch national flag algorithm
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }else if(arr[mid] == 2) {
            swap(arr[mid], arr[high]);
            high--;
        }else {
            mid++;
        }
    }
}

int main() {
    vector<int> arr = {2,0,2,1,1,0};
    
    solve(arr);
    
    for(auto it: arr) {
        cout << it << "\n";
    }
    
    return 0;
}
