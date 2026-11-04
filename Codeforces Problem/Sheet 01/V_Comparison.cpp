#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char s;
    cin >>a>>s>>b;
    bool right=false;
    if(s=='<'){
    right=(a<b);
    }
    else if(s =='>'){
     right=(a>b);
    }
    else if(s=='=') {
        right=(a==b);
    }
    if(right){
     cout<<"Right"<<endl;
    }
    else{
     cout<<"Wrong"<<endl;
    }
    return 0;
}