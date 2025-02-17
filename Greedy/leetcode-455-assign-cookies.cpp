#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    int count = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int ptr1 = 0, ptr2 = 0;
    while(ptr1 < g.size() && ptr2 < s.size()) {
        if(s[ptr2] >= g[ptr1]) {
            count++;
            ptr1++;
        }
        ptr2++;
    }

    return count;
}

int main() {
    vector<int> g = {10, 9, 8, 7};
    vector<int> s = {10, 9, 8, 7};

    cout << findContentChildren(g, s);
}