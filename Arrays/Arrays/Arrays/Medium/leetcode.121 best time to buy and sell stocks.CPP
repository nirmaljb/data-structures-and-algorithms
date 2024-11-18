//
//  leetcode.121 best time to buy and sell stocks.CPP
//  Arrays
//
//  Created by Nirmal Jyoti Biswas on 04/11/24.
//

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices) {
    int x = prices[0], diff = INT_MIN;
    for(int i = 1; i < prices.size(); i++) {
        if(x < prices[i]) {
            diff = max(diff, prices[i] - x);
        }else {
            x = prices[i];
        }
    }
    
    return diff;
}

int main() {
    vector<int> arr = {3,2,6,5,0,3};
    cout << maxProfit(arr) << "\n";
    return 0;
}
