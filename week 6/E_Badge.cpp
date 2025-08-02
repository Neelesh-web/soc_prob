#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int A[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++) {
        vector<bool> visited(n + 1, false);
        int current = i;
        while (!visited[current]) {
            visited[current] = true;
            current = A[current];
        }
        cout << current << " ";
    }
    cout << endl;
}