#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    if(n%2==0&&m%2!=0){
        cout<<0<<endl;
        return 0;
    }
    if(n==1&&m%2==0){
        cout<<0<<endl;
        return 0;
    }
    if(n%2!=0&&m%2==0){
        cout<<0<<endl;
        return 0;
    }
    else cout<<1<<endl;
    return 0;
}