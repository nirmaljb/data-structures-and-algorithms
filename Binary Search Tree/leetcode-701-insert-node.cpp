#include <iostream>
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

TreeNode* insert_node(TreeNode* root, int val) {
    TreeNode* node = new TreeNode(val);
    if(root == NULL) return node;

    TreeNode* curr = root;
    TreeNode* prev = NULL;
    while(curr) {
        prev = curr;
        curr = curr->val > val ? curr->left : curr->right;
    }

    if(prev->val > val) {
        prev->left = node;
    }else {
        prev->right = node;
    }

    return root;
}

int main() {

}