#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[140];

void feyman(){
    ar[1]=1;
    for(ll i=2;i<=102;i++){
        ar[i]=ar[i-1]+(i*i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


    feyman();
    ll t;
    while(cin>>t){
        if(t==0) return 0;
        cout<<ar[t]<<endl;

    }
    return 0;
}
