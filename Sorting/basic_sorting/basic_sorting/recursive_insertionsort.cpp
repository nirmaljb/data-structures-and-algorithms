//
//  recursive_selectionsort.cpp
//  basic_sorting
//
//  Created by Nirmal Jyoti Biswas on 06/10/24.
//
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr, int n, int i) {
    if(i == n) return;
    
    int j = i;
    
    while(j > 0 && arr[j-1] > arr[j]) {
        swap(arr[j], arr[j-1]);
        j--;
    }
    
    insertion_sort(arr, n, i+1);
    
}

int main() {
    vector<int> arr = {12, 9, 100, -1, 7, 3};
    size_t n = arr.size();  
    insertion_sort(arr, n, 0);
    
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
}


