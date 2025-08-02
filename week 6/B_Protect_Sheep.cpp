#include<bits/stdc++.h>
using namespace std;
int main() {
    int R, C;
    cin >> R >> C;
    string board[R];
    for (int i = 0; i < R; i++) {
        cin >> board[i];
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (board[i][j] == 'S') {
                if (i - 1 >= 0 && i - 1 < R && j >= 0 && j < C) {
                    if (board[i - 1][j] == 'W') {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                if (i + 1 >= 0 && i + 1 < R && j >= 0 && j < C) {
                    if (board[i + 1][j] == 'W') {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                if (i >= 0 && i < R && j - 1 >= 0 && j - 1 < C) {
                    if (board[i][j - 1] == 'W') {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                if (i >= 0 && i < R && j + 1 >= 0 && j + 1 < C) {
                    if (board[i][j + 1] == 'W') {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (board[i][j] == 'W') {
                if (i - 1 >= 0 && i - 1 < R && j >= 0 && j < C) {
                    if (board[i - 1][j] == '.') {
                        board[i - 1][j] = 'D';
                    }
                }
                if (i + 1 >= 0 && i + 1 < R && j >= 0 && j < C) {
                    if (board[i + 1][j] == '.') {
                        board[i + 1][j] = 'D';
                    }
                }
                if (i >= 0 && i < R && j - 1 >= 0 && j - 1 < C) {
                    if (board[i][j - 1] == '.') {
                        board[i][j - 1] = 'D';
                    }
                }
                if (i >= 0 && i < R && j + 1 >= 0 && j + 1 < C) {
                    if (board[i][j + 1] == '.') {
                        board[i][j + 1] = 'D';
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
    for (int i = 0; i < R; i++) {
        cout << board[i] << endl;
    }
}