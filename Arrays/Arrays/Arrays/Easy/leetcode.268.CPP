//
//  leetcode.268.CPP
//  Arrays
//
//  Created by Nirmal Jyoti Biswas on 22/10/24.
//

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr) {
    int n = arr.size();
    int total = 0, found_total = 0;
    int i;
    
    for(i = 0; i < n; i++) {
        total += i;
        found_total += arr[i];
    }
    
    total += i;
    
    return total - found_total;
    
}

int main() {
    vector<int> arr = {0,1};
    int response = solve(arr);
    
    cout << response << "\n";
    
    return 0;
}
