#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<unordered_set<int>> A(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        A[a].insert(b);
        A[b].insert(a);
    }
    int x = 0;
    while (true) {
        vector<int> B;
        for (int i = 1; i <= n; i++) {
            if (A[i].size() == 1) {
                B.push_back(i);
            }
        }
        if (B.empty()) break;
        for (int p : B) {
            for (int q : A[p]) {
                A[q].erase(p);
            }
            A[p].clear();
        }
        x++;
    }
    cout << x << endl;
}