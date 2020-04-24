#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 1000000
ll ar[mx+10];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,x;
    cin>>n;
    x=n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        bool flag=true;
        //cout<<"x=="<<x<<endl;
        cin>>v[i];
        ar[v[i]]++;
        if(v[i]==x){
            while(x>0&&ar[x]>0){
                cout<<x<<" ";
                flag=false;
                ar[x]--;
                x--;
            }cout<<endl;
        }
        if(flag) cout<<endl;
    }
    return 0;
}

