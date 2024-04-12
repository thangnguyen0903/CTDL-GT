#include<bits/stdc++.h>
using namespace std;

class Point {
public:
    int x, y;
};

// Compare function for sorting points based on X coordinate
int compareX(const void* a, const void* b) {
    Point *p1 = (Point *)a, *p2 = (Point *)b;
    return (p1->x - p2->x);
}

// Compare function for sorting points based on Y coordinate
int compareY(const void* a, const void* b) {
    Point *p1 = (Point *)a, *p2 = (Point *)b;
    return (p1->y - p2->y);
}

// Utility function to calculate distance between two points
float dist(Point p1, Point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

// Brute force method to find smallest distance between points
float bruteForce(Point P[], int n) {
    float min_dist = FLT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (dist(P[i], P[j]) < min_dist) {
                min_dist = dist(P[i], P[j]);
            }
        }
    }
    return min_dist;
}

// Utility function to find minimum of two float values
float min(float x, float y) {
    return (x < y) ? x : y;
}

// Utility function to find the distance between the closest points of a strip
float stripClosest(Point strip[], int size, float d) {
    float min_dist = d;
    qsort(strip, size, sizeof(Point), compareY);

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size && (strip[j].y - strip[i].y) < min_dist; ++j) {
            if (dist(strip[i], strip[j]) < min_dist) {
                min_dist = dist(strip[i], strip[j]);
            }
        }
    }
    return min_dist;
}

// Recursive function to find the smallest distance
float closestUtil(Point P[], int n) {
    if (n <= 3) {
        return bruteForce(P, n);
    }

    int mid = n / 2;
    Point midPoint = P[mid];

    float dl = closestUtil(P, mid);
    float dr = closestUtil(P + mid, n - mid);

    float d = min(dl, dr);

    Point strip[n];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (abs(P[i].x - midPoint.x) < d) {
            strip[j] = P[i];
            j++;
        }
    }

    return min(d, stripClosest(strip, j, d));
}

// Main function to find the smallest distance
float closest(Point P[], int n) {
    qsort(P, n, sizeof(Point), compareX);
    return closestUtil(P, n);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        Point P[N];
        for (int i = 0; i < N; i++) {
            cin >> P[i].x >> P[i].y;
        }
        cout << fixed << setprecision(6) << closest(P, N) << ' '<< endl;
    }
    return 0;
}
