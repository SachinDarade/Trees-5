#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        if(root == nullptr) {
            return root;
        }
        dfs(root);
        return root;
    }

    void dfs(Node* root) {
        if(root == nullptr || root->left == nullptr) {
            return;
        }
        root->left->next = root->right;
        if(root->next != nullptr) {
            root->right->next = root->next->left;
        }
        dfs(root->left);
        dfs(root->right);
        return;
    }

    
};
