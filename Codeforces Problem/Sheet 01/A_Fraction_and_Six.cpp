#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--){
        int a, b;
        cin >> a >> b;
        string s1,s2;
        cin >> s1>>s2;
        if (a-b==3) {
            for (int i=0;i<s2.size();i++) {
                int pos=s1.find(s2[i]);
                if(pos!=string::npos) {
                    s1.erase(s1.begin()+pos);
                }
            }
            sort(s1.begin(),s1.end());
            if(s1 =="isx"&&a-b==3){
            cout<<"YES"<<endl;
            }
            else{
            cout << "NO" << endl;
            }
        }
        else cout << "NO" << endl;
    }
    return 0;
}