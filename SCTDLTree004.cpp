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

// Hàm xây d?ng cây nh? phân t? m?ng bi?u di?n
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

// Hàm duy?t cây theo th? t? t? ph?i sang trái và in giá tr? các nút nhìn th?y du?c
void rightSideView(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        cout << q.back()->val << " "; // In giá tr? c?a nút cu?i cùng ? m?i c?p d?

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
        cin >> n; // Nh?p s? lu?ng nút trong cây

        vector<int> tree(n); // Khai báo m?ng d? luu cây nh? phân
        for (int i = 0; i < n; ++i) {
            cin >> tree[i]; // Nh?p giá tr? c?a t?ng nút
        }

        TreeNode* root = buildTree(tree); // Xây d?ng cây t? m?ng bi?u di?n

        rightSideView(root); // In ra các giá tr? mà b?n có th? nhìn th?y t? ph?i sang trái
    }

    return 0;
}
