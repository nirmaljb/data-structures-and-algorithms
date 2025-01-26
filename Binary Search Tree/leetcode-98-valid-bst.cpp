#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        val = data;
        left = right = nullptr;
    }
};

bool BST(TreeNode* root, long long min, long long max) {
    if(root == nullptr) return true;
    if(root->val <= min && root->val >= max) return false;

    return BST(root, min, root->val) && BST(root, root->val, max);
}



int main() {
    TreeNode* root = new TreeNode(13);
    return BST(root, LLONG_MIN, LLONG_MAX);
}