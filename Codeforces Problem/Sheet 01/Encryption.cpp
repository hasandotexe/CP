#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        cin.ignore();
        for (int i = 0; i < n; i++) {
            string s;
            getline(cin, s);
            for (char &c : s) {
                if (isalpha((unsigned char)c)) {
                    c = c + 3;
                }
            }
            reverse(s.begin(), s.end());
            for (int i=s.size()/2;i<s.size();i++) {
                s[i] = s[i] - 1;
            }
            cout << s <<endl;
        }
    }
    return 0;
}