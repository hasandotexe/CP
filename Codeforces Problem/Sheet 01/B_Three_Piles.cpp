#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;
        long long al=llabs(a-b);
        long long bob=llabs(a+c-b);
        cout <<max(al,bob)<<endl;
    }
    return 0;
}