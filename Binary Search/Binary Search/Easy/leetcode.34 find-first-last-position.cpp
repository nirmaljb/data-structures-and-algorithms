#include <bits/stdc++.h>
using namespace std;


int upper_bound(vector<int> &nums, int target) {
    int low = 0, high = nums.size() - 1, ans = high + 1, mid = 0;
    
    while(low <= high) {
        mid = (low + high) / 2;
        
        if(nums[mid] > target) {
            ans = mid;
            high = mid - 1; 
        }else {
            low = mid + 1;
        }
    }

    return ans;
}

int lower_bound(vector<int> &nums, int target) {
    int low = 0, high = nums.size() - 1, ans = high + 1, mid = 0;
    
    while(low <= high) {
        mid = (low + high) / 2;

        if(nums[mid] >= target) {
            ans = mid;
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }

    return ans;
}

vector<int> searchRange(vector<int> nums, int target) {
    if(nums.size() == 0) return {-1, -1};

    int low = lower_bound(nums, target);
    int high = upper_bound(nums, target);

    if(low == nums.size() || nums[low] != target) return {-1,-1};
    return {low, high - 1};
}

void display(vector<int> pos) {
    for(auto num: pos) {
        cout << num << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> arr = {5,7,7,8,8,10};
    // vector<int> arr = {1};
    int target = 8;

    display(searchRange(arr, target));
    
}