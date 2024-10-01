#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // map<char, int> hash;
    unordered_map<char, int> hash;
    
    for(int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;

        cout << hash[ch] << "\n";
    }
}