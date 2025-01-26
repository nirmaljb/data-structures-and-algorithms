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


bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p == NULL && q == NULL) {
        return true;
    }

    if(p == NULL || q == NULL) {
        return false;
    }

    if(p->val == q->val) {
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
}

int main() {

    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(4);

    cout << isSameTree(root1, root2) << "\n";
    
    return 0;
}