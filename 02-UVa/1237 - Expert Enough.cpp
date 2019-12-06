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
    while(t--){
        ll d;
        cin>>d;
        string s[d+1];
        ll l[d+2],h[d+2];
        for(ll i=0;i<d;i++){
            cin>>s[i]>>l[i]>>h[i];
        }
        ll q;
        cin>>q;
        while(q--){
            ll n,totall=0,index;
            cin>>n;
            for(int i=0;i<d;i++){
                if(n>=l[i]&&n<=h[i]){
                    totall++;
                    index=i;
                }
            }
            if(totall==1){
                cout<<s[index]<<endl;
            }
            else cout<<"UNDETERMINED"<<endl;
        }
        if(t!=0)cout<<endl;

    }
    return 0;
}
