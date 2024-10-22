//
//  rotate arr by k left-right.cpp
//  Arrays
//
//  Created by Nirmal Jyoti Biswas on 22/10/24.
//

#include <bits/stdc++.h>
using namespace std;

void Reverse(vector<int> &arr, int start, int end) {
    while(start <= end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateLeft(vector<int> &arr, int n, int k) {
//    reverse(arr.begin(), arr.end();
    Reverse(arr, 0, n - 1);
//    reverse(arr.begin(), arr.end() - k);
    Reverse(arr, 0, n - k - 1);
//    reverse(arr.end() - k, arr.end());
    Reverse(arr, n - k, n - 1);
}

void rotateRight(vector<int> &arr, int n, int k) {
    
//    reverse(arr.begin(), arr.end());
    Reverse(arr, 0, n - 1);
//    reverse(arr.begin(), arr.begin() + k);
    Reverse(arr, 0, k - 1);
//    reverse(arr.begin() + k, arr.end());
    Reverse(arr, k, n - 1);
    
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    int k = 3;
    
    k = k % n;
    
    rotateRight(arr, n, k);
//    rotateLeft(arr, n, k);
    
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
    
}
