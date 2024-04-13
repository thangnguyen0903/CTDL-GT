#include <iostream>
#include <vector>

using namespace std;

long long mergeAndCount(vector<long long>& arr, int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    long long count = 0;
    vector<long long> temp(right - left + 1);

    while (i <= mid && j <= right) {
        if (arr[i] > arr[j]) {
            temp[k++] = arr[j++];
            count += (mid - i + 1); // Ð?m s? c?p ngh?ch th?
        } else {
            temp[k++] = arr[i++];
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (i = left, k = 0; i <= right; ++i, ++k) {
        arr[i] = temp[k];
    }

    return count;
}

long long mergeSortAndCount(vector<long long>& arr, int left, int right) {
    long long count = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        count += mergeSortAndCount(arr, left, mid);
        count += mergeSortAndCount(arr, mid + 1, right);
        count += mergeAndCount(arr, left, mid, right);
    }

    return count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        cout << mergeSortAndCount(A, 0, N - 1) << endl;
    }

    return 0;
}
