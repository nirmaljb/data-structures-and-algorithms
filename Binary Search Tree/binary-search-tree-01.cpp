#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data1) {
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* searchBST(TreeNode* root, int val) {
    while(root != NULL && root->data != val) {
        root = val > root->data ? root->right : root->left;
    }
    return root;
}

int main() {
    TreeNode* root = new TreeNode(8);
    root->left = new TreeNode(5);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(7);
    root->left->right->left = new TreeNode(6);


    root->right = new TreeNode(12);
    root->right->left = new TreeNode(10);
    root->right->right = new TreeNode(14);
    root->right->right->left = new TreeNode(13);

    TreeNode* node = searchBST(root, 3);
    cout << node->data << "\n";
}