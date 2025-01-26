#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    public:
    TreeNode(int data1) {
        data = data1;
        left = right = nullptr;
    }
};

int diameter = 0;
int calculate_diameter(TreeNode* root) {

    if(root == NULL) return 0;

    int left = calculate_diameter(root->left);
    int right = calculate_diameter(root->left);
    
    diameter = max(diameter, left + right);

    return 1 + max(left, right);
}

int solve(TreeNode* root) {
    
    calculate_diameter(root);

    return diameter;
}

//optimised
int height(TreeNode* root, int& diameter) {
    if(!root) {
        return 0;
    }

    int left = height(root->left, diameter);
    int right = height(root->right, diameter);

    diameter = max(diameter, 1+ left + right);

    return 1 + max(left, right);
}

int diameterOfBinaryTree(TreeNode* root) {
    int diameter = 0;

    height(root, diameter);

    return diameter;
}

int main() {
    
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(3);

    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << diameterOfBinaryTree(root) << "\n";

    return 0;
}