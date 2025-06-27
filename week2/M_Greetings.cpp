    #include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// Ordered multiset (supports order_of_key)
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<pair<long long, long long>> v(n);
        for (auto &p : v) {
            cin >> p.first >> p.second;  // (a, b)
        }

        // Sort by starting position a ascending
        sort(v.begin(), v.end());

        ordered_set<long long> os;
        long long ans = 0;

        // For each (a, b) in ascending 'a':
        // Count how many previous b' > b
        for (auto &p : v) {
            long long b = p.second;
            // Number of elements ≥ b: 
            // os.size() - count of elements < b
            long long cnt_less = os.order_of_key(b);
            ans += (os.size() - cnt_less);
            os.insert(b);
        }

        cout << ans << "\n";
    }

    return 0;
}