#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 1000009
ll ar[mx+10];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll cnt=0,d=0;
        map<ll,ll> mp;
        bool flag=false;
        vector<ll> ans;
        for(ll i=0;i<v.size();i++){
            //cout<<"x=="<<v[i]<<endl;
            ll x=v[i];
            if(x>0){
                if(ar[x]!=0||mp.find(x)!=mp.end()){
                    flag=true;
                    break;
                }
                else{
                    ar[x]++;
                    cnt++;
                }
            }
            else{
                if(ar[abs(x)]!=1){
                    flag=true;
                    break;
                }
                else{
                    ar[abs(x)]--;
                    if(ar[abs(x)]==0) mp[abs(x)]++;
                    cnt--;
                }
            }
            //cout<<"cnt=="<<cnt<<endl;
            if(cnt==0){
                //memset(ar,0,sizeof(ar));
                mp.clear();
                d++;
                ans.push_back(i+1);
            }
        }
        if(flag==true||d==0||cnt!=0){
            cout<<-1<<endl;
            return 0;
        }
        if(d==1){
            cout<<d<<endl;
            cout<<ans[d-1]<<endl;
            return 0;
        }
        cout<<d<<endl;
        for(ll i=0;i<d;i++){
            if(i==0) cout<<ans[i]<<" ";
            else if(i==d-1) cout<<ans[i]-ans[i-1]<<endl;
            else cout<<ans[i]-ans[i-1]<<" ";
        }
        return 0;
}

