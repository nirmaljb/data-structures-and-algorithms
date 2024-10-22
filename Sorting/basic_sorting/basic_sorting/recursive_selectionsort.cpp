//
//  recursive_selectionsort.cpp
//  basic_sorting
//
//  Created by Nirmal Jyoti Biswas on 06/10/24.
//
#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr, int n, int i) {
    if(i > n-1) return;
    int min = i;
    
    for(int j = i; j < n; j++) {
        if(arr[min] > arr[j]) {
            swap(arr[min], arr[j]);
        }
    }
    
    selection_sort(arr, n, i+1);
    
}

int main() {
    vector<int> arr = {12, 9, 100, -1, 7, 3};
    size_t n = arr.size();
    selection_sort(arr, n, 0);
    
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
}


