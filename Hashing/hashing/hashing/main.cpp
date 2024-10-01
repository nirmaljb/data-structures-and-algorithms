#include<bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
//    vector<int> vec = {10,20,30};
//    
//    vec.assign(arr, arr + n);
//    
//    for(auto it: vec) {
//        cout << it << "\n";
//    }
    
    int q;
    cin >> q;
    
    int* store = new int[++q];
    
    for(int i = 0; i < n; i++) {
        store[arr[i]]++;
    }
    
    for(int i = 0; i < n + 1; i++) {
        cout << store[i] << " ";
    }
    cout << "\n";
}
