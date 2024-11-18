//
//  leetcode.169 majority-element.CPP
//  Arrays
//
//  Created by Nirmal Jyoti Biswas on 30/10/24.
//

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> nums) {
    int n = nums.size();
    int candidate = 0;
    int balance = 0;
    
    for(auto it: nums) {
        if(balance == 0) {
            candidate = it;
        }
        if(candidate == it) {
            balance++;
        }else {
            balance--;
        }
    }
    return candidate;
}

int main() {
    vector<int> arr = {2,2,1,1,1,2,2};
    cout << solve(arr);
    return 0;
}
