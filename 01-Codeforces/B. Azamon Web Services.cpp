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
        string a,b;
        cin>>a>>b;
        for(ll i=0;i<a.size();i++){
            ll k=i;
            for(ll j=a.size()-1;j>i;j--){
                if(a[j]<a[k]){
                    k=j;
                }
            }
            //cout<<k<<endl;
            if(k!=i){
                swap(a[k],a[i]);
                break;
            }
        }
        if(a<b) cout<<a<<endl;
        else cout<<"---"<<endl;
    }
    return 0;
}
