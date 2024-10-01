//
//  bubblesort.cpp
//  basic_sorting
//
//  Created by Nirmal Jyoti Biswas on 26/09/24.
//

#include <bits/stdc++.h>
using namespace std;

void display(vector<int> arr) {
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> arr = {13,46,24,52,-20,9};
    int n = arr.size();
    
    for(int i = n-1; i >= 0; i--) {
        int didswap = 0;
        for(int j = 0; j <= i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap++;
            }
        }
        if(didswap == 0) {
            break;
        }
    }
    
    display(arr);
}
