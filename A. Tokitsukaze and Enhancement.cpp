#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    int x=t%4;
    if(x==1){
        cout<<0<<" "<<"A"<<endl;
    }
    if(x==2){
        cout<<1<<" "<<"B"<<endl;
    }
    if(x==3){
        cout<<2<<" "<<"A"<<endl;
    }
    if(x==0){
        cout<<1<<" "<<"A"<<endl;
    }
    return 0;
}
