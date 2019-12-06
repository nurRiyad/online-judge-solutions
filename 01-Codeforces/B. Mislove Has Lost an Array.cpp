#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,l,r,ev=1;
    cin>>n>>l>>r;
    ll mnsum=1,mxsum=1;
    l--;r--;n--;
    for(ll i=0,j=0;i<n;i++,j++){
        if(j<l){
            ev*=2;
            mnsum+=ev;
        }
        else{
            mnsum+=1;
        }
    }
    ev=1;
    for(ll i=0,j=0;i<n;i++,j++){
        if(j<r){
            ev*=2;
            mxsum+=ev;
            //cout<<ev<<endl;
            //cout<<mxsum<<endl;
        }
        else{
            mxsum+=ev;
        }
    }
    cout<<mnsum<<" "<<mxsum<<endl;
    return 0;
}
