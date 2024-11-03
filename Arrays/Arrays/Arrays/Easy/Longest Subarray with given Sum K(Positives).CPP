//
//  Longest Subarray with given Sum K(Positives).CPP
//  Arrays
//
//  Created by Nirmal Jyoti Biswas on 27/10/24.
//

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr, int n, int k) {
    //using two pointers
    int sum = arr[0], max_count = 1, left = 0, right = 0;
    
    while(right < n) {
        while(left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }
        
        if(sum == k) {
            max_count = max(max_count, right - left + 1);
        }
        right++;
        if(right < n) {
            sum += arr[right];
        }
    }
    return max_count;
}

int solve(vector<int> arr, long long k) {
    int n = arr.size();
    
    //using hashmap
    
    map<long long, int> prefixSum;
    long long sum = 0;
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        
        if(sum == k) {
            count = max(count, i + 1);
        }
        
    
        long long difference = sum - k;
        
        if(prefixSum.find(difference) != prefixSum.end()) {
            int len = i - prefixSum[difference];
            count = max(count, len);
        }
        
        if(prefixSum.find(sum) == prefixSum.end()) {
            prefixSum[sum] = i;
        }
    }
    
    return count;
}

int main() {
    
    vector<int> arr = {1,2,3,1,1,1,1,4,3,2};
    int n = arr.size(), k = 3;
    
    cout << solve(arr,k) << "\n";
    return 0;
}
