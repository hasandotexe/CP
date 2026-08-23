#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<string> grid(8);
        for (int i = 0; i < 8; i++) {
            cin >> grid[i];
        }
        int col = -1;
        for (int c = 0; c < 8; c++) {
            for (int r = 0; r < 8; r++) {
                if (grid[r][c] != '.') {
                    col = c;
                    break;
                }
            }
            if (col != -1) break;
        }
        string word = "";
        for (int r = 0; r < 8; r++) {
            if (grid[r][col] != '.') {
                word += grid[r][col];
            }
        }
        cout << word << endl;
    }
    return 0;
}