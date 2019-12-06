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
 		ll ar[10000];
 		memset(ar,0,sizeof(ar));
 		cin>>n;
 		vector<ll> v(n);
 		for(ll i=0;i<n;i++) cin>>v[i];
 		for(ll i=0;i<v.size();i++){
 			for(ll j=i+1;j<v.size();j++){
 				if(v[i]<=v[j]){
 					ar[j]++;
 				}
 			}
 		}
 		//for(ll i=1;i<v.size();i++) cout<<ar[i]<<" ";
 		//cout<<endl;
 		ll sum=0;
 		for(ll i=1;i<v.size();i++){
 			sum+=ar[i];
 		}
 		cout<<sum<<endl;
 	}   
    return 0;
}