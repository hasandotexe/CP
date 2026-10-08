#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,even=0,odd=0,positive=0,negative=0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0) {
        even++;
    }
    if(a[i] % 2 != 0) {
        odd++;
    }
    if(a[i] > 0) {
        positive++;
    } 
     if (a[i] < 0) {
        negative++;
    }
}
    cout << "Even: " << even << endl << "Odd: " << odd << endl << "Positive: " << positive << endl << "Negative: " << negative << endl;
    return 0;
}