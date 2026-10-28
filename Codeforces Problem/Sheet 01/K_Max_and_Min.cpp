#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,c;
    cin >> a >> b >> c;
    long long mn=min(a,min(b,c));
    long long mx=max(a,max(b,c));
    cout <<mn<<" "<<mx<<endl;
    return 0;
}