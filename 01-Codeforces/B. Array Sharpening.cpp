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
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll flag=true;
        ll left,right;
        for(ll i=0;i<n;i++){
            if(v[i]<i){
                left=i-1;
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
            continue;
        }
        flag=true;
        for(ll i=n-1,j=0;i>=0;i--,j++){
            if(v[i]<j){
                right=i+1;
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
            continue;
        }
        if(left>=right){
            cout<<"Yes"<<endl;
            continue;
        }
        cout<<"No"<<endl;
    }
    return 0;
}

