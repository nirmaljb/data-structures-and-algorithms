#include <iostream>
#include <vector>
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

vector<int> inorder_traversal(TreeNode* root) {
    vector<int> store;
    stack<TreeNode*> stk;
    while(true) {
        TreeNode* node = root;
        if(node != nullptr) {
            stk.push(node);
            node = node->right;
        }else {
            if(stk.empty()) break;
            node = stk.top();
            stk.pop();
            store.push_back(node->val);
            node = node->right;
        }
    }
    return store;
}

int kthSmallest(TreeNode* root, int k) {
    vector<int> values = inorder_traversal(root);

    return values[k - 1];
}


int main() {
    
}