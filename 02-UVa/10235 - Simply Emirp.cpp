#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 1000000
ll prime[mx+10];

void seieve(){
    prime[1]=1;
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
        string a=s;
        reverse(s.begin(),s.end());
        string b=s;
        stringstream sa,sb;
        ll x,y;
        sa<<a;
        sa>>x;
        sb<<b;
        sb>>y;
        if(isPrime(x)){
            if(isPrime(y)&&x!=y){
                cout<<x<<" is emirp."<<endl;
            }
            else cout<<x<<" is prime."<<endl;

        }
        else cout<<x<<" is not prime."<<endl;
    }
    return 0;
}

