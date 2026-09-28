#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,cnt=0;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n/2; i++){
        if(arr[i] == arr[n-1-i]){
            cnt++;
            continue;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    if(cnt == n/2){
        cout << "YES" << endl;
    }
}