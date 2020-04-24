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
        ll a,b;
        cin>>a>>b;
        if(a>=b){
            cout<<"YES"<<endl;
            continue;
        }
        bool flag=false;
        ll aa=1+ceil((double)b/2);
        if(aa<=a) flag=true;
        for(ll i=1;i<=b;i++){
            ll bb=i+ceil((double)b/(i+1));
            //cout<<bb<<" "<<i<<endl;
            if(bb<=a){
                flag=true;
                break;
            }
            if(bb>aa) break;
            else aa=bb;
        }
        //cout<<mn<<endl;
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

