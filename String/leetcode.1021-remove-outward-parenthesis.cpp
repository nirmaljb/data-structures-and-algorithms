#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
    int depth = 0;
    string res = "";
    for(auto ch: s) {
        if(ch == '(' && depth++ > 0) {
            res += ch;
        }else if(ch == ')' && depth-- > 1) {
            res += ch;
        }
    }

    return res;
}


int main() {
    string s = "(()(()))";
    string result = removeOuterParentheses(s);

    cout << result << "\n";
}