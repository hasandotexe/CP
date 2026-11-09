#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long result=(a%100)*(b%100)%100;
    result=result*(c%100)%100;
    result=result*(d%100)%100;
    printf("%02lld\n",result);
    return 0;
}