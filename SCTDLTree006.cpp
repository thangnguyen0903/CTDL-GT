#include<bits/stdc++.h>
using namespace std;

// �?nh nghia c?u tr�c cho m?t n�t trong c�y nh? ph�n
struct Node {
    int data;
    Node* left;
    Node* right;
};

// H�m t?o m?t n�t m?i v?i gi� tr? cho tru?c
Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// H�m t?o c�y nh? ph�n t? m?ng
Node* createTree(const vector<int>& arr, Node* root, int i, int n) {
    if (i < n) {
        Node* temp = newNode(arr[i]);
        root = temp;

        // Th�m n�t con tr�i
        root->left = createTree(arr, root->left, 2 * i + 1, n);

        // Th�m n�t con ph?i
        root->right = createTree(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

// H�m t�nh d? s�u t?i da c?a c�y nh? ph�n
int maxDepth(Node* node) {
    if (node == NULL)
        return 0;
    else {
        int leftDepth = maxDepth(node->left);
        int rightDepth = maxDepth(node->right);
        return max(leftDepth, rightDepth) + 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        Node* root = createTree(arr, root, 0, n);
        cout << maxDepth(root) << endl;
    }
    return 0;
}
