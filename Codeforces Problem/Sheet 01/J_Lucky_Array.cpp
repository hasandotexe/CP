#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,cnt=0;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[0]== a[i+1]){
            cnt++;
        }
        else continue;
    }
          if(cnt%2==0){
              cout <<"Lucky";
          }
          else{
              cout <<"Unlucky";
          }  
}