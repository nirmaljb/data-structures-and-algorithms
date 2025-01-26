#include <bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1, ans = -1, mid = 0;
    while(left <= right) {
        mid = (left + right) / 2;
        if(nums[mid] == target) {
            ans = mid;
            right = mid - 1;
        }else if(nums[mid] > target){
            right = mid - 1;
        }else {
            left = mid + 1;
        }
    }

    return ans;
}

int lastOccurance(vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1, ans = -1, mid = 0;
    while(left <= right) {
        mid = (left + right) / 2;
        if(nums[mid] == target) {
            ans = mid;
            left = mid + 1;
        }else if(nums[mid] > target) {
            right = mid - 1;
        }else {
            left = mid + 1;
        }
    }

    return ans;
}


vector<int> searchRange(vector<int> &nums, int target) {
    int first = firstOccurance(nums, target);
    int last = lastOccurance(nums, target);

    // cout << first << " " << last << "\n";

    return {first, last};
}

void display(vector<int> arr) {
    for(auto &it: arr) {
        cout << it << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> arr = {2, 8, 8, 8, 8, 8, 11, 13};
    int target = 6;

    searchRange(arr, target);
    
    return 0;
}