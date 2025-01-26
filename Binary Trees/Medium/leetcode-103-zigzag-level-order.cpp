#include<bits/stdc++.h>
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

void display(vector<int> arr) {
    for(auto it: arr) {
        cout << it << " ";
    }
    cout << "\n";
}

vector<vector<int>> solve(TreeNode* root) {
    vector<vector<int>> store;
    if(root == NULL) {
        return store;
    }
    bool leftToRight = true;
    
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()) {
        int n = q.size();
        vector<int> nodeVal(n);

        for(int i = 0; i < n; i++) {
            TreeNode* node = q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);

            int index = leftToRight ? i : (n - 1 - i);
            nodeVal[index] = node->val;
        }
        leftToRight = !leftToRight;
        store.push_back(nodeVal);
    }

    return store;
}

int main() {

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    solve(root);
    
}