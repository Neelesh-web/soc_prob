#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> adj(n+1);
    for (int i = 0, u, v; i < n - 1; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int center = -1, cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (adj[i].size() >= 3) {
            center = i;
            cnt++;
        }
    }
    if (cnt > 1) {
        cout << "No\n";
        return 0;
    }
    if (center == -1) {
        center = 1;
        while (adj[center].size() != 1)
            center++;
    }
    vector<int> leaves;
    for (int u : adj[center]) {
        int cur = u, prev = center;
        while (adj[cur].size() > 1) {
            int nxt = (adj[cur][0] == prev ? adj[cur][1] : adj[cur][0]);
            prev = cur;
            cur = nxt;
        }
        leaves.push_back(cur);
    }
    cout << "Yes\n";
    cout << leaves.size() << "\n";
    for (int leaf : leaves)
        cout << center << " " << leaf << "\n";
    return 0;
}