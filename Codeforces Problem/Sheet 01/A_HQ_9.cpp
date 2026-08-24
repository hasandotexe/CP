#include<bits/stdc++.h>
using namespace std;
int main () {
    string p;
    cin >> p;
    bool hasOutput=false;
    for (char c:p) {
        if (c=='H'||c=='Q'||c=='9') {
            hasOutput=true;
            break;
        }
    }
    cout << (hasOutput?"YES":"NO")<<endl;
    return 0;
}