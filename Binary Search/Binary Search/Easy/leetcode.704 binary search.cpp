//
//  main.cpp
//  Binary Search
//
//  Created by Nirmal Jyoti Biswas on 04/11/24.
//

#include <bits/stdc++.h>
using namespace std;

int binary_Search(vector<int> arr, int target) {
    int left = 0, right = arr.size() - 1;
    
    while(left <= right) {
        int mid = (left + right)/2;
        
        if(arr[mid] == target) {
            return mid;
        }else if(arr[mid] > target) {
            right = mid - 1;
        }else {
            left = mid + 1;
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> arr = {-1,0,3,5,9,12};
    cout << binary_Search(arr, 9) << "\n";
    
    return 0;
}
