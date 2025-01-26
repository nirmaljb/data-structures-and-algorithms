#include <iostream>
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

int minValue(Node* root) {
    int value = 0;
    while(root != NULL) {
        value = root->data;
        root = root->left;
    }

    return value;
}