#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool seen[26]={false};
    for(char c:s) {
        if(islower(c))seen[c-'a']=true;
        else seen[c-'A']=true;
    }
    
    bool isPangram =true;
    for(int i=0;i<26;i++) {
        if(!seen[i]) {
            isPangram =false;
            break;
        }
    }
    
    cout <<(isPangram ?"YES":"NO")<<endl;
    return 0;
}