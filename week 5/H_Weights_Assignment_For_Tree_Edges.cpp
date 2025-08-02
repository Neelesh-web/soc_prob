#include <iostream>
#include <vector>
#include <numeric>
 
void solve() {
    int n;
    std::cin >> n;
 
    std::vector<int> b(n + 1);
    int root = -1;
    for (int i = 1; i <= n; ++i) {
        std::cin >> b[i];
        if (b[i] == i) {
            root = i;
        }
    }
 
    std::vector<int> p(n + 1);
    std::vector<int> pos(n + 1); 
    for (int i = 1; i <= n; ++i) {
        std::cin >> p[i];
        pos[p[i]] = i;
    }
    if (p[1] != root) {
        std::cout << -1 << std::endl;
        return;
    }
    std::vector<long long> weights(n + 1);
    std::vector<long long> dist(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int u = p[i];
        if (u == root) {
            weights[u] = 0; 
            dist[u] = 0;
            continue;
        }
        int parent = b[u];
        if (pos[parent] > pos[u]) {
            std::cout << -1 << std::endl;
            return;
        }
        long long current_weight = pos[u] - pos[parent];
        weights[u] = current_weight;
        dist[u] = dist[parent] + current_weight;
    }
    for (int i = 1; i <= n; ++i) {
        std::cout << weights[i] << (i == n ? "" : " ");
    }
    std::cout << std::endl;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}