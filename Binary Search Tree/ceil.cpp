#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int data1) {
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};

int findCeil(Node* root, int input) {
    if (root == NULL) return -1;

    int value = -1;
    while(root != NULL) {
        if(root->data == input) return input;
        
        if(root->data > input) {
            value = root->data;
            root = root->left;
        }else {
            root = root->right;
        }
    }

    return value;
}