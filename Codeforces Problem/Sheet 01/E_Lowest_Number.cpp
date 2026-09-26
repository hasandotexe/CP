#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,pos,min = 10e7;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++){
        if(a[i]<min){
            min = a[i];
            pos=i+1;}
    }
    cout << min << " " << pos << endl;
}