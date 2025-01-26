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

int maxHeightOfTree(TreeNode* root) {
    if(root == NULL) {
        return 0;
    }

    int leftDepth = maxHeightOfTree(root->left);
    int rightDepth = maxHeightOfTree(root->right);

    return 1 + max(leftDepth, rightDepth);
}

int heightOfTree(TreeNode* root) {
    if(root == NULL) {
        return 0;
    }

    int count = 0;
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()) {
        int n = q.size();
        for(int i = 0; i < n; i++) {
            TreeNode* node = q.front();
            q.pop();
            
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        count++;
    }

    return count;
}

int main() {

    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);

    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    cout << heightOfTree(root) << "\n";
    
    return 0;
}