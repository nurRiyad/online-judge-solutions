#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll h,n;
        cin>>h>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        if(h<=2){
            cout<<0<<endl;
            continue;
        }
        ll cnt=0;
        for(ll i=1;i<v.size();i++){
            if(h<=2) break;
            else if(h-v[i]>1){
                h=v[i]+1;
                i--;
                //continue;
            }
            else{
                if(i==v.size()-1){
                    cnt++;
                }
                else{
                    ll x=v[i+1];
                    if(h-2==x){
                        h=h-2;
                        i++;
                        //continue;
                    }
                    else{
                        h=h-2;
                        cnt++;
                        //i++;
                        //continue;
                    }
                }
            }
            //cout<<i<<"= cnt="<<cnt<<endl;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
