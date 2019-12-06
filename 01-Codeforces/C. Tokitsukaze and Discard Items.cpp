#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(m);
    for(int i=0;i<m;i++) cin>>v[i];
    ll t=(((v[0]-1)/k)+1)*k,asn=0;
    for(int i=0;i<v.size();i++){
        if(v[i]<=t){
            //cout<<v[i]<<" ";
        }
        else{
            //cout<<endl;
            asn++;
            t=(((v[i]-i-1)/k)+1)*k+i;
        }
    }
    cout<<asn+1<<endl;
    return 0;
}
