#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    int A[n];
    for (int i = 1; i < n; i++) {
        cin >> A[i];
    }
    int i = 1;
    while (i < t) {
        i += A[i];
    }
    if (i == t) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}