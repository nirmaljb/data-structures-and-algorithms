//
//  leetcode.53 maximum-subarray.CPP
//  Arrays
//
//  Created by Nirmal Jyoti Biswas on 04/11/24.
//

#include <bits/stdc++.h>
using namespace std;

int max_subarray(vector<int> arr) {
    int sum = 0, max_sum = INT_MIN;
    
    for(auto it: arr) {
        sum += it;
        
        if(sum < 0) {
            sum = 0;
        }
        
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

void max_subarray(vector<int> arr, int k) {
    int start = 0, sum = 0;
    int max_sum = INT_MIN;
    int arr_min = -1, arr_max = -1;
    
    for(int i = 0; i < arr.size(); i++) {
        if(sum == 0) {
            start = i;
        }
        
        sum += arr[i];
        if(sum > max_sum) {
            arr_min = start;
            arr_max = i;
            max_sum = sum;
        }
        
        if(sum < 0) {
            sum = 0;
        }
        
        for(int i = arr_min; i <= arr_max; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    max_subarray(arr, 0);
    
    return 0;
}
