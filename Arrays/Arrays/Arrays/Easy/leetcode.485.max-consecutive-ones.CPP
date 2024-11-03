//
//  max-consecutive-ones.CPP
//  Arrays
//
//  Created by Nirmal Jyoti Biswas on 22/10/24.
//

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr) {
    int n = arr.size();
    int count = 0, window = 0;
    int j = 0, i = 0;
    
    while(j < n) {
        if(arr[i] == 1) {
            count = 0;
            while(arr[j] != 0) {
                count++;
                j++;
            }
            i = j;
        }else {
            i++;
            j++;
        }
        window = max(window, count);
    }
    return window;
}

int main() {
    vector<int> arr = {1,0,1,1,0,1};
    int response = solve(arr);
    
    cout << response << "\n";
    return 0;
}
