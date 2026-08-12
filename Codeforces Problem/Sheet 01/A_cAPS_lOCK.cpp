#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    bool allUpper = true;
    for (int i = 0; i < n; i++)
        if (islower(s[i])) allUpper = false;

    bool restUpper = true;
    for (int i = 1; i < n; i++)
        if (islower(s[i])) restUpper = false;

    if (allUpper || restUpper) {
        for (int i = 0; i < n; i++)
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
    }

    cout << s << endl;
    return 0;
}