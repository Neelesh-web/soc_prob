#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    vector<string> output;

    while (t--) {
        int n, q; cin >> n >> q;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        // Coordinate compress
        vector<int> sorted_arr = arr;
        sort(sorted_arr.begin(), sorted_arr.end());
        sorted_arr.erase(unique(sorted_arr.begin(), sorted_arr.end()), sorted_arr.end());

        auto compress = [&](int x) {
            return (int)(lower_bound(sorted_arr.begin(), sorted_arr.end(), x) - sorted_arr.begin());
        };

        // positions[i] = all indices where compressed value i appears
        vector<vector<int>> positions(sorted_arr.size());

        for (int i = 0; i < n; i++) {
            positions[compress(arr[i])].push_back(i);
        }

        while (q--) {
            int a, b; cin >> a >> b;

            // Check if a and b exist in compressed values
            int a_comp = (int)(lower_bound(sorted_arr.begin(), sorted_arr.end(), a) - sorted_arr.begin());
            int b_comp = (int)(lower_bound(sorted_arr.begin(), sorted_arr.end(), b) - sorted_arr.begin());

            if (a_comp == (int)sorted_arr.size() || sorted_arr[a_comp] != a
                || b_comp == (int)sorted_arr.size() || sorted_arr[b_comp] != b) {
                output.push_back("NO");
                continue;
            }

            int fro1 = positions[a_comp][0];  // first occurrence of a

            // binary search in b positions for index >= fro1
            auto it = lower_bound(positions[b_comp].begin(), positions[b_comp].end(), fro1);

            if (it != positions[b_comp].end() && fro1 < *it) {
                output.push_back("YES");
            } else {
                output.push_back("NO");
            }
        }
    }

    for (auto& res : output) cout << res << "\n";

    return 0;
}
