//
//  main.cpp
//  basic_sorting
//
//  Created by Nirmal Jyoti Biswas on 24/09/24.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> arr = {12, 9, -1, 100, 7, 3};
    int min = 0, n = arr.size();
    
    for(int i = 0; i <= n - 2; i++) {
        min = i;
        for(int j = i; j <= n-1; j++) {
            if(arr[j] < arr[min]) {
                int temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
}
