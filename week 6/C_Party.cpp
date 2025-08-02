#include <bits/stdc++.h>
using namespace std;
int f(int a, vector<int>& A, vector<int>& B) {
    if (B[a] != -1) return B[a];
    if (A[a] == -1) return B[a] = 1;
    return B[a] = 1 + f(A[a], A, B);
}
int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n, -1);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        A[i] = (x == -1) ? -1 : x - 1;
    }
    int max_B = 0;
    for (int i = 0; i < n; i++) {
        max_B = max(max_B, f(i, A, B));
    }
    cout << max_B << endl;
}