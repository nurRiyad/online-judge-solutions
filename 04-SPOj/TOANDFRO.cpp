#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    while(1){
        ll n,m;
        cin>>n;
        if(n==0) return 0;
        string s,st;
        cin>>s;
        if(s.size()%n==0) m=s.size()/n;
        else m=s.size()/n + 1;
        ll y=(n*m) - s.size();

        for(ll i=0;i<y;i++) s.push_back('x');

        for(ll i=0;i<m;i++){
            if(i%2==1){
                ll x=i*n;
                ll y=i*n+n-1;
                string temp;
                for(ll j=y;j>=x;j--){
                    temp.push_back(s[j]);
                }
                //reverse(temp.begin(),temp.end());
                //cout<<temp<<endl;
                for(ll j=0;j<temp.size();j++) st.push_back(temp[j]);
            }
            else{
                ll x=i*n;
                ll y=(i*n)+n-1;
                for(ll j=x;j<=y;j++) st.push_back(s[j]);
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                ll index=(j*n)+i;
                //cout<<index<<" ";
                cout<<st[index];
            }
            //cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
