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

int findCeil(Node* root, int x) {
    int floor = -1;
        while(root != NULL) {
            if(root->data == x) return x;
            
            if(root->data < x) {
                floor = root->data;
                root = root->right;
            }else {
                root = root->left;
            }
        }
        
    return floor;   
}