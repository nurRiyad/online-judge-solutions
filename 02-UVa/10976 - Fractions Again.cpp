#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll k;
    while(cin>>k){
        ll sum=0;
        for(ll i=k+1;i<=(2*k);i++){
            if((i*k)%(i-k)==0) sum++;
        }
        cout<<sum<<endl;
        for(ll i=k+1;i<=(k*2);i++){
            if((i*k)%(i-k)==0){
                cout<<"1/"<<k<<" = 1/"<<(i*k)/(i-k)<<" + 1/"<<i<<endl;
            }
        }
    }
    return 0;
}
