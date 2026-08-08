#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt=0,sum=0;
    string s;
    cin >> s;
    string str="hello";
    for(int i=0;i<s.size();i++){
        if(s[i]==str[sum]){
            cnt++;
            sum++;
        }
    }
    if(cnt==5)cout<<"YES";
    else cout<<"NO";
    return 0;
}