//
//  quick_sort.cpp
//  basic_sorting
//
//  Created by Nirmal Jyoti Biswas on 06/10/24.
//

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    
    while(i < j) {
        while(arr[i] <= pivot && i < high) {
            i++;
        }
        while(arr[j] > pivot && j > low) {
            j--;
        }
        if(i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort_asc(vector<int> &arr, int low, int high) {
    if(low < high) {
        int partion_index = partition(arr, low, high);
        quick_sort_asc(arr, low, partion_index - 1);
        quick_sort_asc(arr, partion_index + 1, high);
    }
}

int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = static_cast<int> (arr.size());
    
    quick_sort_asc(arr, 0, n - 1);
    
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}
