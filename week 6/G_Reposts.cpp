#include <bits/stdc++.h>
using namespace std;
string to_lowercase(string s) {
    for (char &c : s) c = tolower(c);
    return s;
}
int main() {
    int n;
    cin >> n;
    map<string, int> length;
    length["polycarp"] = 1; 
    for (int i = 0; i < n; i++) {
        string name1, str, name2;
        cin >> name1 >> str >> name2;
        name1 = to_lowercase(name1);
        name2 = to_lowercase(name2);
        length[name1] = length[name2] + 1;
    }
    int maxi = 0;
    for (auto &x : length) {
        maxi = max(maxi, x.second);
    }
    cout << maxi << endl;
}