#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int n) {
    int first_el = arr[0];
    for(int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = first_el;
}

int main(int argc, const char * argv[]) {
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    solve(arr, n);
    
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
    
    return 0;
}
