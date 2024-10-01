#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    int hash[256] = {0};
    for(int i = 0; i < n; i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while(q--) {
        char character;
        cin >> character;

        int place = character;

        cout << hash[place] << "\n";
    }
}