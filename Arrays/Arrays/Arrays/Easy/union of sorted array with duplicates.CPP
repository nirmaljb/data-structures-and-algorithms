//
//  union of sorted array with duplicates.CPP
//  Arrays
//
//  Created by Nirmal Jyoti Biswas on 22/10/24.
//

#include <bits/stdc++.h>
using namespace std;

void intersestion(map<int, int> store) {
    for(auto it: store) {
        if(it.second > 1) {
            cout << it.first << " ";
        }
    }
    cout << "\n";
}

void showDistinct(map<int,int> store) {
    for(auto it: store) {
        if(it.second == 1) {
            cout << it.first << " ";
        }
    }
    cout << "\n";
}

vector<int> solve(vector<int> &a, vector<int> &b, int n, int m) {
    int i = 0, j = 0;
    vector<int> Union;
    
    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            if(Union.size() == 0 || Union.back() != a[i]) {
                Union.push_back(a[i]);
            }
            i++;
        }else {
            if(Union.size() == 0 || Union.back() != b[j]) {
                Union.push_back(b[j]);
            }
            j++;
        }
    }
    
    while(i < n) {
        if(Union.back() != a[i]) {
            Union.push_back(a[i]);
        }
        i++;
    }
    
    while(j < m) {
        if(Union.back() != b[j]) {
            Union.push_back(b[j]);
        }
        j++;
    }
    
    return Union;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    vector<int> b = {2,3,4,4,5,11,12};
    
    int n = arr.size();
    int m = b.size();
    
    vector<int> response = solve(arr, b, n, m);
    
    for(auto it: response) {
        cout << it << " ";
    }
    cout << "\n";
    
    return 0;
}
