#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        for (int i = 0; i < 3; i++) {
            string s;
            cin >> s;

            if (s.find('?') != string::npos) {
                for (char ch = 'A'; ch <= 'C'; ch++) {
                    if (s.find(ch) == string::npos) {
                        cout << ch << '\n';
                        break;
                    }
                }
            }
        }
    }

    return 0;
}