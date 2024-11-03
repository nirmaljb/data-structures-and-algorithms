//
//  leetcode.283.cpp
//  Arrays
//
//  Created by Nirmal Jyoti Biswas on 22/10/24.
//

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr) {
    int j;
    
    int n = static_cast<int>(arr.size());
    
    for(j = 0; j < n; j++) {
        if(arr[j] == 0) {
            break;
        }
    }

    for(int i = j+1; i < n; i++) {
        if(arr[i] != 0) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
    
}

int main() {
    vector<int> arr = {0,1,0,3,12};
    solve(arr);
    
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
    
}
