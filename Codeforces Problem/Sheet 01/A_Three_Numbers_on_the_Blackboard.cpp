#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        vector<long long> ar = {a, b, c};
        sort(ar.begin(), ar.end());
        long long ans = min(ar[1], ar[2] - ar[0]);
        cout << ans << endl;
    }
    return 0;
}