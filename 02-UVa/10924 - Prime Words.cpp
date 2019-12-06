#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 1000000
ll prime[mx+10];

void seieve(){
    prime[0]=1;
    for(ll i=2;i<=sqrt(mx);i++){
        for(ll j=i*2;j<=mx;j+=i){
            prime[j]=1;
        }
    }
}

bool isPrime(ll a){
    if(prime[a]==0) return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    seieve();
    string s;
    while(cin>>s){
        ll cnt=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                ll x=(s[i]-'a')+1;
                cnt+=x;
            }
            else{
                ll x=(s[i]-'A')+27;
                cnt+=x;
            }
        }
        if(isPrime(cnt)) cout<<"It is a prime word."<<endl;
        else cout<<"It is not a prime word."<<endl;
    }
    return 0;
}

