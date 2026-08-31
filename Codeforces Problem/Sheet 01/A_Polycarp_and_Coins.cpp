#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
   cin >>t;
    while(t--){
        long long n;
        cin >>n;
        long long k=n/3;
        long long r=n%3;
        long long c1,c2;
        if(r==0){
            c1=k;
            c2=k;
        } else if(r==1){
            c1=k+1;
            c2=k;
        } else {
            c1=k;
            c2=k + 1;
        }
        cout<<c1<<" "<< c2<<endl;
    }
    return 0;
}