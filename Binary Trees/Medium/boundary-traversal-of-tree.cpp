#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        val = data;
        left = nullptr;
        right = nullptr;
    }
};

bool isLeafNode(TreeNode* node) {
    return (!node->left && !node->right);
}

void addLeafNode(TreeNode* root, vector<int> &store) {
    if(isLeafNode(root)) {
        store.push_back(root->val);
        return;
    }

    if(root->left) addLeafNode(root->left, store);
    if(root->right) addLeafNode(root->right, store);
}

void addLeftBoundary(TreeNode* root, vector<int> &store) {
    TreeNode* curr = root->left;
    while(curr) {
        if(!isLeafNode(curr)) store.push_back(curr->val);
        if(curr->left) curr = curr->left;
        else curr = curr->right;
    }
}

void addRightBoundary(TreeNode* root, vector<int> &store) {
    stack<int> right_boundary;
    
    TreeNode* curr = root->right;
    while(curr) {
        if(!isLeafNode(curr)) right_boundary.push(curr->val);
        if(curr->right) curr = curr->right;
        else curr = curr->left;
    }

    while(!right_boundary.empty()) {
        store.push_back(right_boundary.top());
        right_boundary.pop();
    }
}

vector<int> printTree(TreeNode* node) {
    vector<int> store;
    if(!node) return store;

    if(!isLeafNode(node)) store.push_back(node->val);
    
    addLeftBoundary(node, store);
    addLeafNode(node, store); 
    addRightBoundary(node, store);

    return store;
}


int main() {

    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);

    root->right = new TreeNode(20);
    root->right->left  = new TreeNode(18);
    root->right->right  = new TreeNode(25);

    vector<int> result = printTree(root);

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << "\n";
    
    return 0;
}