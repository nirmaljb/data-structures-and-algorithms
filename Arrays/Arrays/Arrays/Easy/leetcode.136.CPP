//
//  leetcode.136.CPP
//  Arrays
//
//  Created by Nirmal Jyoti Biswas on 22/10/24.
//

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr) {
//    map<int, int> store;
//    
//    for(auto it: arr) {
//        store[it]++;
//    }
//    
//    for(auto it: store) {
//        if(it.second == 1) {
//            cout << it.first << "\n";
//            return;
//        }
//    }
    int val = 0;
    for(auto it: arr) {
        val ^= it;
    }
    
    cout << val << "\n";
}

int main() {
    vector<int> arr = {4,1,2,1,2};
    
    solve(arr);
    
    return 0;
}
