#include<bits/stdc++.h>
using namespace std;
int memo[41];
int fibonacci(int n) {
    if(n==1) return 1;
    if(n==2) return 2;
    if(memo[n]!=0) return memo[n];
    return memo[n]=fibonacci(n-1)+fibonacci(n-2);
}
int main() {
    int n;
    while (cin >> n) {
        if (n==0) break;
        cout << fibonacci(n)<<endl;
    }
    return 0;
}