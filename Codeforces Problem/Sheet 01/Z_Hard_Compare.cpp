#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ld x=(ld)b*logl((ld)a);
    ld y=(ld)d*logl((ld)c);
    cout<<(x>y?"YES":"NO")<<endl;
}