#include <bits/stdc++.h>
using namespace std;
int n, ax, ay, bx, by, cx, cy;
bool visited[1001][1001];
bool isSafe(int x, int y) {
    if (x < 1 || x > n || y < 1 || y > n) return false;
    if (x == ax || y == ay || abs(x - ax) == abs(y - ay)) return false;
    return true;
}
bool dfs(int x, int y) {
    if (!isSafe(x, y) || visited[x][y]) return false;
    visited[x][y] = true;
    if (x == cx && y == cy) return true;
 
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            if (dx == 0 && dy == 0) continue;
            if (dfs(x + dx, y + dy)) return true;
        }
    }
    return false;
}
int main() {
    cin >> n;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    if (dfs(bx, by)) cout << "YES" << endl;
    else cout << "NO" << endl;
}