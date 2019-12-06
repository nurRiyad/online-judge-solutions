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
    
 	string s;
 	while(cin>>s){
 		if(s=="0") return 0;
 		s.erase(s.size()-1);
 		stringstream ss;
 		ll n;
 		ss<<s;
 		ss>>n;
 		ll v[100009];
 		memset(v,0,sizeof(v));
 		for(ll i=1;i<=n;i++){
 			ll x;
 			cin>>x;
 			v[x]=i;
 		}
 		ll flag=0;
 		for(ll i=0;i<n&&!flag;i++){
 			for(ll j=1;i+(j*2)<n&&!flag;j++){
 				flag=(v[i]<v[i+j]&&v[i+j]<v[i+(j*2)]);
 			}
 		}
 		if(flag) cout<<"no"<<endl;
 		else cout<<"yes"<<endl;
  	}   
    return 0;
}