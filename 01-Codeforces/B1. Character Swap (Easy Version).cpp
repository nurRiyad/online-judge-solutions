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
        if(sa==sb){
            cout<<"Yes"<<endl;
            continue;
        }
        ll cnt=0;
        string x,y;
        for(ll i=0;i<n;i++){
            if(sa[i]==sb[i]) continue;
            else{
                cnt++;
                x.push_back(sa[i]);
                y.push_back(sb[i]);
            }
        }
        if(cnt==2){
            if(x[0]==x[1]&&y[0]==y[1]) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else{
            cout<<"No"<<endl;
            continue;
        }
    }
    return 0;
}

