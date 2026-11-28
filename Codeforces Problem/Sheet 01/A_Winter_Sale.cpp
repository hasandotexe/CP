#include <bits/stdc++.h>
using namespace std;
int main() {
    double x, p;
    cin >> x >> p;
    cout << fixed << setprecision(2)<<p*100/(100-x)<<"\n";
    return 0;
}