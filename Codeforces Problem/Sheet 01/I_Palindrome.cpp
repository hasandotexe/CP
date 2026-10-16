#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x=n;
    long long rev=0;
    while (x>0) {
        rev=rev*10+x%10;
        x/=10;
    }
    cout <<rev<<endl;
    cout <<(rev==n?"YES":"NO")<<endl;
    return 0;
}