#include<bits/stdc++.h>
using namespace std;
#define ll long long 
string tostr(ll n) {stringstream rr;rr<<n;return rr.str();}

bool unik(ll a,ll b){
	if(a<=9999) a=a*10;
	if(b<=9999) b=b*10;
	stringstream ssa,ssb;
	string sa=tostr(a);
	string sb=tostr(b);
	string ans=sa+sb;
	int ar[11];
	memset(ar,0,sizeof(ar));
	for(int i=0;i<ans.size();i++){
		int c=ans[i]-'0';
		if(ar[c]==0) ar[c]=1;
		else return false;
	}
	return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    
 	ll n,fg=0;
 	while(cin>>n){
 		ll flag=0;
 		if(n==0) return 0;
 		if(fg>0) cout<<endl;
 		for(ll i=1000;i<=99999;i++){
 			ll x=i*n;
 			if(x>99999) break;
 			else if(unik(i,x)){
 				string sa=tostr(x);
 				if(sa.size()==4) sa.insert(0,"0");
 				string sb=tostr(i);
 				if(sb.size()==4) sb.insert(0,"0");
 				cout<<sa<<" / "<<sb<<" = "<<n<<endl;
 				flag=1;
 			}
 		}
 		if(flag==0) cout<<"There are no solutions for "<<n<<"."<<endl;
 		fg++;
 	}  
    return 0;
}