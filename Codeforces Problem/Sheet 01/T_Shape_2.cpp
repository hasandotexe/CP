#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<= n;i++){
        string line = string(n - i, ' ') + string(2 * i - 1, '*');
        cout<<line<<"\n";
    }
    return 0;
}