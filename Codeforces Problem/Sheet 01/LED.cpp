#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int t;
    cin >> t;
    while(t--){
        int sum=0;
        string s;
        cin >> s;
        for (char c : s){
            sum+=arr[c-'0'];
        }
        cout<<sum<<" "<<"leds"<<endl;
    }
}