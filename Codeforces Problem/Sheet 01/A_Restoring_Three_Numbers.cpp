#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    vector<int> s(4);
    for(int i = 0; i < 4; i++) {
        cin >> s[i];
    }
    sort(s.begin(), s.end());\
        a=s[3]-s[2];
        b=s[3]-s[0];
        c=s[3]-a-b;
        cout << a << " " << b << " " << c;
        return 0;
}