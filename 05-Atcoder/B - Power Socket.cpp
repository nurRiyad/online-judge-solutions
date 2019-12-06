#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll a,b;
    cin>>a>>b;
    ll cnt=0,x=0;
    if(b==1){
        cout<<0<<endl;
        return 0;
    }
    while(x<b){
       if(cnt==0) x+=a;
       else x+=(a-1);
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
