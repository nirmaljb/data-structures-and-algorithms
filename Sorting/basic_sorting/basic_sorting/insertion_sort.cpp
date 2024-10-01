#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
//    vector<int> arr = {12, 9, -1, 100, 7, 3};
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int j = 0, n = arr.size();
    
    for(int i = 0; i < n; i++) {
        j = i;
        while(j > 0 && arr[j-1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
            cout << "runs" << "\n";
        }
    }
    
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
}
