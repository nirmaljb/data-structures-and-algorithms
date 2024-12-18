#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    //if there any of the arrays is exhausted, we just simply added the remaining elements from the rest of the other array
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    
    //replace the main array with the sorted array
    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void merge_sort(vector<int> &arr, int low, int high) {
    if(low >= high) return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {3,1,2,4,1,5,6,2,4};
    int n = arr.size();
    merge_sort(arr, 0, n - 1);
    
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
}
