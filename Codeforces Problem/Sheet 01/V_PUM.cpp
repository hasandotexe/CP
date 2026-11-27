#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x=1;
    for(int i =1;i<=n;i++) {
        cout<<x<<" "<<x + 1<<" "<<x+2<<" PUM\n";
        x += 4;
    }
    return 0;
}