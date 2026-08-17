#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int min_candies = *min_element(a.begin(), a.end());
        long long total_moves = 0;
        for(int i = 0; i < n; i++){
            total_moves += (a[i] - min_candies);
        }
        cout << total_moves << endl;
    }
}