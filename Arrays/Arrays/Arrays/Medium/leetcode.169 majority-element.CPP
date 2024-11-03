//
//  leetcode.169 majority-element.CPP
//  Arrays
//
//  Created by Nirmal Jyoti Biswas on 30/10/24.
//

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums) {
    int n = nums.size();
    int k = n / 2;

    unordered_map<int, int> store;
    
    for(auto it: nums) {
        store[it]++;
    }
    
    for(auto it: store) {
        if(it.second >= k) {
            cout << it.first << "\n";
            return;
        }
    }
}

int main() {
    vector<int> arr = {2,2,1,1,1,2,2};
    solve(arr);
    return 0;
}
