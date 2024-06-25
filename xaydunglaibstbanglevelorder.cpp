#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to insert a node in the BST
TreeNode* insertIntoBST(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val) {
        root->left = insertIntoBST(root->left, val);
    } else {
        root->right = insertIntoBST(root->right, val);
    }
    return root;
}

// Function to build BST from level-order traversal
TreeNode* buildBSTFromLevelOrder(vector<int>& levelOrder) {
    if (levelOrder.empty()) return NULL;
    
    TreeNode* root = new TreeNode(levelOrder[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    
    while (i < levelOrder.size()) {
        TreeNode* current = q.front();
        q.pop();
        
        if (i < levelOrder.size()) {
            current->left = new TreeNode(levelOrder[i++]);
            q.push(current->left);
        }
        if (i < levelOrder.size()) {
            current->right = new TreeNode(levelOrder[i++]);
            q.push(current->right);
        }
    }
    
    return root;
}

// Function to perform pre-order traversal
void preOrderTraversal(TreeNode* root, vector<int>& result) {
    if (!root) return;
    result.push_back(root->val);
    preOrderTraversal(root->left, result);
    preOrderTraversal(root->right, result);
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<int> levelOrder(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> levelOrder[i];
        }
        
        TreeNode* bstRoot = NULL;
        for (int val : levelOrder) {
            bstRoot = insertIntoBST(bstRoot, val);
        }
        
        vector<int> preOrderResult;
        preOrderTraversal(bstRoot, preOrderResult);
        
        for (int val : preOrderResult) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}

