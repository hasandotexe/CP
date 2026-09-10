#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin >>n>>a>>b;
        long long pairCost = min(2*a,b);
        long long total =(n/2)*pairCost+(n%2)*a;
        cout << total <<endl;
    }
    return 0;
}