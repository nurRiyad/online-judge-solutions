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
        ll n;
        cin>>n;
        string sa,sb;
        cin>>sa>>sb;
        ll ar[30];
        memset(ar,0,sizeof(ar));
        for(ll i=0;i<n;i++){
            ll x=sa[i]-'a';
            ll y=sb[i]-'a';
            ar[x]++;
            ar[y]++;
        }

        ll flag=0;
        for(ll i=0;i<30;i++){
            //cout<<ar[i]<<" ";
            if(ar[i]%2==1){
                flag=1;
                break;
            }
        }
        //cout<<endl;
        if(flag){
            cout<<"NO"<<endl;
            continue;
        }
        ll cnt=0;
        vector<pair<ll,ll> > vp;
        for(ll i=0;i<n;i++){
            if(sa[i]==sb[i]) continue;
            else{
                ll flag1=1;
                for(ll j=i+1;j<n;j++){
                    if(sa[i]==sa[j]){
                        vp.push_back(make_pair(j,i));
                        cnt++;
                        swap(sa[j],sb[i]);
                        flag1=0;
                        break;
                    }
                }
                if(flag1){
                    for(ll j=i;j<n;j++){
                        if(sa[i]==sb[j]){
                            vp.push_back(make_pair(j,j));
                            cnt++;
                            swap(sa[j],sb[j]);
                            i--;
                            break;
                        }
                    }
                }
            }
            //cout<<sa<<" "<<sb<<endl;
        }
        cout<<"YES"<<endl;
        cout<<cnt<<endl;
        for(ll i=0;i<vp.size();i++){
            cout<<vp[i].first+1<<" "<<vp[i].second+1<<endl;
        }
    }
    return 0;
}

