#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll ar[60];
    ar[0]=1;
    ar[1]=1;
    for(ll i=2;i<51;i++){
        ar[i]=ar[i-1]+ar[i-2];
    }
    ll n;
    while(cin>>n){
        if(n==0) return 0;
        else cout<<ar[n]<<endl;
    }
    return 0;
}

