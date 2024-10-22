#include <bits/stdc++.h>
using namespace std;

void display(vector<int> arr) {
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
}

vector<int> getSlice(vector<int> arr, int start) {
    return vector<int>(arr.end() - start, arr.end());
}

void solve(vector<int> &arr, int k) {
    int n = arr.size();
    int start = k % n;
    
    if(start == 0) {
        return;
    }
    
    //range from steps to end
    vector<int> temp = getSlice(arr, start);
    display(temp);
    //remove the last elements
    arr.erase(arr.end() - start, arr.end());
    display(arr);
    //insert it from the beginning of the vector
    arr.insert(arr.begin(), temp.begin(), temp.end());
}

void solve(vector<int> &arr) {
    reverse(arr.begin())
}

int main(int argc, const char * argv[]) {
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    
//    solve(arr, k);
    solve(arr);
    
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
    
    return 0;
}
