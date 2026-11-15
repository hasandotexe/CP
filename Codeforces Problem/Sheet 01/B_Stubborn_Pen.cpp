#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,cnt=0;
        cin >> x ;
        string s;
        cin >> s;
        if (s[0] == 'B') {
            cnt++;
        }
        for(int i=0;i<x;i++)
        {
            if (s[i]==s[i+1]) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}