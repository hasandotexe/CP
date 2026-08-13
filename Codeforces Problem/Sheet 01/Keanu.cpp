#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int mul=n*n;
    if(mul%2==0){
        cout<<mul/2 <<" " <<"casas brancas e" <<" "<<mul/2 <<" "<<  "casas pretas"<<endl;
    }
    else{
        cout<<(mul/2)+1 <<" " <<"casas brancas e" <<" "<<mul/2 <<" "<<  "casas pretas"<<endl;
    }
    return 0;
}