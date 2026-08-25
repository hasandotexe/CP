#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int diff_days=min(a,b);
    int same_days=abs(a-b)/2;
    cout<<diff_days <<" " <<same_days <<endl;
    return 0;
}