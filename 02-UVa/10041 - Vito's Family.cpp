#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    
 	ll t;
 	cin>>t;
 	while(t--){
 		ll n;
 		cin>>n;
 		vector<ll> v(n);
 		for(ll i=0;i<n;i++) cin>>v[i];
 		sort(v.begin(),v.end());
 		ll a=v[0],b=v[v.size()-1];
 		//cout<<a<<" "<<b<<endl;
 		ll mn=INT_MAX;
 		for(ll i=a;i<=b;i++){
 			ll x=i,sum=0;
 			for(ll j=0;j<v.size();j++){
 				sum+=abs(x-v[j]);
 			}
 			mn=min(sum,mn);
 		}
 		cout<<mn<<endl;
 	}   
    return 0;
}