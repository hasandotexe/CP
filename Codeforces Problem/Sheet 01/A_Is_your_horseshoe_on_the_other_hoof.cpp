#include<bits/stdc++.h.>
using namespace std;
int main (){
    int n=4,cnt=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]||a[i]==a[i+3]||a[i]==a[i+2]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}