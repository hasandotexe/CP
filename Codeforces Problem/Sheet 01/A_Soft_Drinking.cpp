#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int byDrink=(k*l)/(n*nl);
    int byLime=(c*d)/n;
    int bySalt=p/(n*np);
    int ans=min({byDrink,byLime,bySalt});
    cout << ans<<endl;
    return 0;
}