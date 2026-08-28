#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long best=LLONG_MAX;
    for (int i=0;i<n;i++) {
        long long a;
        cin >>a;
        best=min(best,abs(a));
    }
    cout <<best<<endl;
    return 0;
}