#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// H�m x�y d?ng c�y nh? ph�n t? m?ng bi?u di?n
TreeNode* buildTree(vector<int>& nums) {
    if (nums.empty()) return nullptr;

    queue<TreeNode*> q;
    TreeNode* root = new TreeNode(nums[0]);
    q.push(root);

    int i = 1;
    while (!q.empty() && i < nums.size()) {
        TreeNode* node = q.front();
        q.pop();

        if (nums[i] != -1) {
            node->left = new TreeNode(nums[i]);
            q.push(node->left);
        }
        i++;

        if (i < nums.size() && nums[i] != -1) {
            node->right = new TreeNode(nums[i]);
            q.push(node->right);
        }
        i++;
    }

    return root;
}

// H�m duy?t c�y theo th? t? t? ph?i sang tr�i v� in gi� tr? c�c n�t nh�n th?y du?c
void rightSideView(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        cout << q.back()->val << " "; // In gi� tr? c?a n�t cu?i c�ng ? m?i c?p d?

        for (int i = 0; i < size; ++i) {
            TreeNode* node = q.front();
            q.pop();

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t; // Nh?p s? lu?ng testcase

    while (t--) {
        int n;
        cin >> n; // Nh?p s? lu?ng n�t trong c�y

        vector<int> tree(n); // Khai b�o m?ng d? luu c�y nh? ph�n
        for (int i = 0; i < n; ++i) {
            cin >> tree[i]; // Nh?p gi� tr? c?a t?ng n�t
        }

        TreeNode* root = buildTree(tree); // X�y d?ng c�y t? m?ng bi?u di?n

        rightSideView(root); // In ra c�c gi� tr? m� b?n c� th? nh�n th?y t? ph?i sang tr�i
    }

    return 0;
}
