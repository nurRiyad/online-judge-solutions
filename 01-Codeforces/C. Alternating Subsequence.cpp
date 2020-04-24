#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mk  make_pair
#define pb  push_back


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n),pos,neg;
        for(ll i=0;i<n;i++) cin>>v[i];
        ll ans=INT_MIN;
        for(ll i=0;i<n;i++){
            //cout<<"here="<<i<<endl;
            if(pos.size()%2==0){
                ll cnt=0,mx=INT_MIN;
                for(ll j=i;j<n;j++){
                    if(v[j]>0){
                        cnt++;
                        mx=max(mx,v[j]);
                        if(j==n-1) {
                            pos.pb(mx);
                            i=n-1;
                        }
                    }
                    else if(cnt>0&&v[j]<0){
                        pos.pb(mx);
                        i=j-1;
                        break;
                    }
                    if(j==n-1) i=n-1;
                }
            }
            else{
                ll cnt=0,mx=INT_MIN;
                for(ll j=i;j<n;j++){
                    if(v[j]<0){
                        cnt++;
                        mx=max(mx,v[j]);
                        if(j==n-1){
                            pos.pb(mx);
                            i=n-1;
                        }
                    }
                    else if(cnt>0&&v[j]>0){
                        pos.pb(mx);
                        i=j-1;
                        break;
                    }
                    if(j==n-1) i=n-1;
                }
            }
        }

        for(ll i=0;i<n;i++){
            //cout<<"here="<<i<<endl;
            if(neg.size()%2==0){
                ll cnt=0,mx=INT_MIN;
                for(ll j=i;j<n;j++){
                    if(v[j]<0){
                        cnt++;
                        mx=max(mx,v[j]);
                        if(j==n-1){
                            i=n-1;
                            neg.pb(mx);
                        }
                    }
                    else if(cnt>0&&v[j]>0){
                        neg.pb(mx);
                        i=j-1;
                        break;
                    }
                    if(j==n-1) i=n-1;
                }
            }
            else{
                ll cnt=0,mx=INT_MIN;
                for(ll j=i;j<n;j++){
                    if(v[j]>0){
                        cnt++;
                        mx=max(mx,v[j]);
                        if(j==n-1){
                             neg.pb(mx);
                             i=n-1;
                        }
                    }
                    else if(cnt>0&&v[j]<0){
                        neg.pb(mx);
                        i=j-1;
                        break;
                    }
                    if(j==n-1) i=n-1;
                }
            }
        }
        ll sum1=0,sum2=0;
        for(ll i=0;i<pos.size();i++) sum1+=pos[i];
        //cout<<"ses"<<endl;
        for(ll i=0;i<neg.size();i++) sum2+=neg[i];
        //cout<<"----"<<endl;

        if(pos.size()==neg.size()){
            cout<<max(sum1,sum2)<<endl;
        }
        else if(pos.size()>neg.size()) cout<<sum1<<endl;
        else cout<<sum2<<endl;

    }
    return 0;
}
