#include <bits/stdc++.h>
using namespace std;
int main (){
    int t,cnt=0,cnt1=0;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        if(n > m) cnt++;
        else if(m > n) cnt1++;
    }
    if(cnt > cnt1) cout << "Mishka" << endl;
    else if(cnt1 > cnt) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    return 0;
}