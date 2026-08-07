#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int cnt=0,cnt1=0;
        string s;
        cin >> s;
        for (int i=0; i<5; i++) {
            if (s[i] == 'A') cnt++;
            else cnt1++;
        }
        if (cnt > cnt1) cout << "A" << endl;
        else cout << "B" << endl;
    }
    return 0;
}