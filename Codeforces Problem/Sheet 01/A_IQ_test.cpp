#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int Count = 0;
    for (int i = 0; i < 3; i++) {
        if (arr[i] % 2 == 0) Count++;
    }
    int m = (Count >= 2) ? 0 : 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != m) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}