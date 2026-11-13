#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a==b-1 && b==c-1)
        {
            cout<<"YES"<<endl;
           continue;
        }
        if(b==a-1 && a==c-1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(c==b-1 && b==a-1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}