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
    
 	ll t,ck,xx=1;
 	while(cin>>t){
 		if(t==-1) return 0;
 		ck=t;
 		ll ar[65];
	 	memset(ar,0,sizeof(ar));
 		while(t--){
 			double n,g,y,r;
 			cin>>n>>g>>y>>r;
 			double cycle=g+y+r;
 			for(ll i=30;i<=60;i++){
 				double t=n*3600/i;
 				//t=t*3600;
 				t=fmod(t,cycle);
 				//ll x=(int)t/cycle;
 				//t=t-(cycle*x);
 				if(t<=(g+y))  ar[i]+=1;
 			}
 		}
 		//for(ll i=30;i<=60;i++) cout<<ar[i]<<" ";
 		//cout<<endl;

 		vector< pair<int,int> > vp;
 		ll sum=0;
 		for(ll i=30;i<=61;i++){
 			if(ar[i]==ck&&(i!=61)) sum++;
 			else{
 				if(sum==0) continue;
 				else if(sum==1) vp.push_back(make_pair(i-1,i-1));
 				else vp.push_back(make_pair(i-sum,i-1));
 				sum=0;
 			}
 		}

 		if(vp.size()==0) cout<<"Case "<<xx<<": No acceptable speeds."<<endl;
 		else{
 			cout<<"Case "<<xx<<": ";
 			for(ll i=0;i<vp.size()-1;i++){
 				if(vp[i].first==vp[i].second) cout<<vp[i].first<<", ";
 				else cout<<vp[i].first<<"-"<<vp[i].second<<", ";
 			}
 			int last=vp.size()-1;
 			if(vp[last].first==vp[last].second) cout<<vp[last].first<<endl;
 			else cout<<vp[last].first<<"-"<<vp[last].second<<endl;
 		}
 		xx++;
 	}   
    return 0;
}