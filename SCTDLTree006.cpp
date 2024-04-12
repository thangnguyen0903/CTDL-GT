#include<bits/stdc++.h>
using namespace std;

// Ð?nh nghia c?u trúc cho m?t nút trong cây nh? phân
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Hàm t?o m?t nút m?i v?i giá tr? cho tru?c
Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Hàm t?o cây nh? phân t? m?ng
Node* createTree(const vector<int>& arr, Node* root, int i, int n) {
    if (i < n) {
        Node* temp = newNode(arr[i]);
        root = temp;

        // Thêm nút con trái
        root->left = createTree(arr, root->left, 2 * i + 1, n);

        // Thêm nút con ph?i
        root->right = createTree(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

// Hàm tính d? sâu t?i da c?a cây nh? phân
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
