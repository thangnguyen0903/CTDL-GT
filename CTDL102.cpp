#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n; // S? d?nh c?a d? th?

    vector<vector<int>> adjacency_matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> adjacency_matrix[i][j]; // Ð?c ma tr?n k?
        }
    }

    // Chuy?n ma tr?n k? sang danh sách k?
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << ": ";
        for (int j = 0; j < n; ++j) {
            if (adjacency_matrix[i][j] == 1) {
                cout << j + 1 << " "; // Ð?nh k? v?i d?nh i
            }
        }
        cout << endl;
    }

    return 0;
}
