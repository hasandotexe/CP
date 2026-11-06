#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    int x= (int)n;
    double frac=n-x;
    if(fabs(frac)<0.0005)
    cout << "int " << x << endl;
    else
     cout<<"float "<< x <<" "<<frac<<endl;
    return 0;
}