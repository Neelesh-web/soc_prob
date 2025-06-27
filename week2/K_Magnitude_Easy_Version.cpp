#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    long long prefix_sum = 0, min_prefix_sum = 0;
    for (int i = 0; i < n; ++i) {
        prefix_sum += a[i];
        min_prefix_sum = min(min_prefix_sum, prefix_sum);
    }

    cout << prefix_sum - 2 * min_prefix_sum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
