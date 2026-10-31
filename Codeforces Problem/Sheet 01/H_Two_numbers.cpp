#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    double r=(double)a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<(int)floor(r)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<(int)ceil(r)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<(int)round(r)<<endl;
    return 0;
}