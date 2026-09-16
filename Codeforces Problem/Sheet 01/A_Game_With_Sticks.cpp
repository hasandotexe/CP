#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >>n>>m;
    int moves = min(n, m);
    if(moves % 2 == 1)
        cout<<"Akshat"<<endl;
    else
        cout<<"Malvika"<<endl;
    return 0;
}