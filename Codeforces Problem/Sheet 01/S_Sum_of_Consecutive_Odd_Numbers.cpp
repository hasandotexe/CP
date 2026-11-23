#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        long long x,y;
        cin >> x >> y;
        if (x > y) 
        swap(x, y);
        long long sum = 0;
        for(long long i = x + 1; i < y; i++){ 
            if (i % 2 != 0) {
                sum += i;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}