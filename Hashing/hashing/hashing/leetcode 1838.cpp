#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr) {
    unordered_map<int, int> store;
    for(auto it: arr) {
        store[it]++;
    }
    
    int max_val = numeric_limits<int>::min(), min_val = numeric_limits<int>::max();
    int m_val = 0, s_val = 0;
    
    for(auto it: store) {
        if(it.second > max_val) {
            max_val = it.second;
            m_val = it.first;
        }
        if(it.second < min_val) {
            min_val = it.second;
            s_val = it.first;
        }
        
    }
    
    cout << "Maximum frequency : " << m_val;
    cout << "\n";
    cout << "Minimum frequency : " << s_val;
    cout << "\n";
}

int main(int argc, const char * argv[]) {
    
    vector<int> arr = {10, 20, 30, 10, 30, 10, 12, 20};
    solve(arr);
}
