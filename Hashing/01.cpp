//basic hashing
#include<iostream>
using namespace std;

int hashing[10000000];
int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        hashing[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;

        cout << hashing[number] << "\n";
    }
}