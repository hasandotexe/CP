#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,maximum=0,minimum=10e7,c1=0,c2=0;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>maximum){
           maximum=a[i];
            c1=i;
        }
        if(a[i]<minimum){
            minimum=a[i];
            c2=i;
        }
    }
    int temp=c1;
    c1=c2;
    c2=temp;
    a[c1]=maximum;
    a[c2]=minimum;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}