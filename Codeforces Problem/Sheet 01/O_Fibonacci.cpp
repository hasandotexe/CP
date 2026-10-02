#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    long long a = 0,b = 1;
    if (N==1) {
        cout<<0;
    } 
    else if (N==2) {
        cout<<1;
    } 
    else {
        for (int i=3;i<=N;i++) {
            long long c=a+b;
            a=b;
            b=c;
        }
        cout << b;
    }
    return 0;
}