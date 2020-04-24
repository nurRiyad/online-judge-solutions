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
        ll n,c,m;
        cin>>n>>c>>m;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]>c){
            cout<<0<<endl;
            continue;
        }
        if(m>=n&&v[v.size()-1]<=c){
            cout<<n<<endl;
            continue;
        }
        ll mx=v[0];
        for(ll i=0;i<m;i++){
            mx=max(mx,v[i]);
        }
        if(mx>c){
            ll cnt1=0;
            for(ll i=0;i<n;i++){
                cnt1+=v[i];
                if(cnt1>c){
                    cout<<i<<endl;
                    break;
                }
            }
            continue;
        }
        ll cnt1=0,cnt2=0,ans1=0;
        for(ll i=m-1,j=0;i<n;i+=m,j++){
            cnt1+=v[i];
            if(cnt1<=c) ans1+=m;
            else{
                i=i-m+1;
                cnt2=0;
                ans1-=mx;
                for(ll k=0;i<n;i++,k++){
                    cnt2+=v[k];
                    if(cnt2+ans1+v[i]>=c){
                        cnt2+=v[k];
                    }
                    else{
                        ans1+=cnt2+v[i];
                        break;
                    }
                }
                break;
            }
        }
        cout<<ans1<<endl;
    }
    return 0;
}

