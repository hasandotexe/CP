#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n && n!=0) {
        vector<int> arr(2*n);
        for (int i=0;i<2*n;i++) {
            cin >> arr[i];
        }
        int maxSum=0,minSum=10e7;
        for (int i=0;i<n;i++){
            int pairSum=arr[i]+arr[2*n-1-i];
            maxSum=max(maxSum,pairSum);
            minSum=min(minSum,pairSum);
        }  
        cout << maxSum <<" "<< minSum << endl;
    }
    return 0;
}