//
//  recursive_bubblesort.cpp
//  basic_sorting
//
//  Created by Nirmal Jyoti Biswas on 06/10/24.
//

#include <bits/stdc++.h>
using namespace std;

//void bubble_sort(vector<int> &arr, int col) {
//    int n = static_cast<int>(arr.size());
//    if(n == 1) return;
//    
//    int didSwap = 0;
//    for(int i = 0; i < n - col - 1; i++) {
//        if(arr[i] > arr[i+1]) {
//            int temp = arr[i];
//            arr[i] = arr[i+1];
//            arr[i+1] = temp;
//            didSwap++;
//        }
//    }
//    
//    if(didSwap == 0) return;
//        
//    bubble_sort(arr, col+1);
//    
//}
void bubble_sort(vector<int> &arr, int r, int col) {
    if(r == 0) return;
    if(col < r) {
        if(arr[col] > arr[col+1]) {
            int temp = arr[col];
            arr[col] = arr[col+1];
            arr[col+1] = temp;
        }
        bubble_sort(arr, r, col+1);
    }else {
        bubble_sort(arr, r - 1, 0);
    }
}
int main() {
    vector<int> arr = {5, 3, -1, 0, 4};
    int n = static_cast<int>(arr.size());
    bubble_sort(arr, n - 1, 0);
    
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
    
}
