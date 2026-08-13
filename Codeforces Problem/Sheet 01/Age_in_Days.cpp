#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int year=0,month=0;
    int count=n/365;
    if(n>365)
    {
        for(int i=0;i<count;i++)
        {
            n=n-365;
            year++;
        }
        cout<<year<<" ano(s)"<<endl;
    }
    else if(n==365){ 
n=n/365;
cout<<n<<" ano(s)"<<endl; 
n=0;
}
else 
cout<<"0 ano(s)"<<endl;
if(n==30) {
    cout<<"1 mes(es)"<<endl;
    }
    if(n>30)
    {
        int count1=n/30;
        for (int i= 0;i<count1;i++)
        {
            n=n-30;
            month++;
        }
 
        cout<<month<<" mes(es)"<<endl; } 
else if(n<=29) { 
cout<<"0 mes(es)"<<endl; }
    if(n<30)
    {
        cout<<n<<" dia(s)"<<endl;
    }
else 
cout<<"0 dia(s)"<<endl;
    return 0;
}