#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


// Function to check if a node exists in a BST.
bool findNode(TreeNode* root, int value) {
    
    if(root == nullptr) {
        return false;
    }
        if (root->val == value) {
            return true;
        }
        return (findNode(root->left, value) || findNode(root->right,value));
}

int main() {
    // Create a sample BST
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    //Testing 
    int value = 3; // Value to find
    bool result = findNode(root, value);
    if (result) {
        cout << "Node with value " << value << " exists in the BST." << endl;
    } else {
        cout << "Node with value " << value << " does not exist in the BST." << endl;
    }
    return 0;
}
