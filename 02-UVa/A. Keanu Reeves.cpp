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
    
 	ll n,one=0,zero=0;
 	cin>>n;
 	string s;
 	cin>>s;
 	for(int i=0;i<n;i++){
 		if(s[i]=='1') one ++;
 		else zero ++;
 	}
 	//cout<<one<<" "<<zero<<endl;
 	if(one!=zero){
 		cout<<1<<endl;
 		cout<<s<<endl;
 	}
 	else{
 		cout<<2<<endl;
 		cout<<s[0]<<" ";
 		for(int i=1;i<s.size();i++) cout<<s[i];
 		cout<<endl;
 	}
    return 0;
}