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
    
 	ll n,w=0;
 	while(cin>>n){
 		w++;
 		if(n==0) return 0;
 		cout<<"Case "<<w<<":"<<endl;
		vector<ll> v(n);
		for(ll i=0;i<n;i++) cin>>v[i];
		sort(v.begin(),v.end());
		int t;
		cin>>t;	
		while(t--){
			ll a,mn=INT_MAX,ans;
			cin>>a;
			for(ll i=0;i<v.size();i++){
				for(ll j=i+1;j<v.size();j++){
					ll sum=v[i]+v[j];
					ll d=abs(sum-a);
					if(d<mn){
 						mn=d;
						ans=sum;
					}
				}
			}			
			cout<<"Closest sum to "<<a<<" is "<<ans<<"."<<endl;
		}
	}   
    return 0;
}