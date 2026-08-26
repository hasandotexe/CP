#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin >>n>>m;
    long long cur=1;
    long long total=0;
    for (int i=0;i<m;i++) {
        int a;
        cin >>a;
        long long dist=((a-cur)%n+n)%n;
        total+=dist;
        cur=a;
    }
    cout<<total<<endl;
    return 0;
}