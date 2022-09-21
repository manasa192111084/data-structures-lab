#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
{
    int key;
    Node *left, *right;
 
    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};
 
{
    if (root == nullptr) {
        return;
    }
 
    inorderTraversal(root->left);
    cout << root->key << ' ';
    inorderTraversal(root->right);
}
 
{
    if (root == nullptr) {
        return;
    }
 
    cout << root->key << ' ';
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
                int &pIndex, unordered_map<int, int> &map)
{
    // base case
    if (start > end) {
        return nullptr;
    }
 
    Node *root = new Node(preorder[pIndex++]);
 
    int index = map[root->key];
 
    root->left = construct(start, index - 1, preorder, pIndex, map);
 
    root->right = construct(index + 1, end, preorder, pIndex, map);
 
    return root;
}
{
    int n = inorder.size();
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++) {
        map[inorder[i]] = i;
    }
 
    int pIndex = 0;
 
    return construct(0, n - 1, preorder, pIndex, map);
}
 
int main()
{

    vector<int> inorder = { 4, 2, 1, 7, 5, 8, 3, 6 };
    vector<int> preorder = { 1, 2, 4, 3, 5, 7, 8, 6 };
 
    Node* root = construct(inorder, preorder);
 
    cout << "The inorder traversal is "; inorderTraversal(root);
    cout << "\nThe preorder traversal is "; preorderTraversal(root);
 
    return 0;
}