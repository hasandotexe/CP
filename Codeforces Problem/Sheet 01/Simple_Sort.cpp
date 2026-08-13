#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 3;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        ar[i]= arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    cout<<endl;
    for (int i = 0; i < n; i++) {
        cout << ar[i] << endl;
    }
    return 0;
}