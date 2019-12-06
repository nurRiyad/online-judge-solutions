#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,m;
    cin>>n>>m;
    if(m==0){
        cout<<1<<endl;
        return 0;
    }
    if(n==m){
        cout<<0<<endl;
        return 0;
    }
    int x=n/2;
    if(x>=m) cout<<m<<endl;
    else cout<<n-m<<endl;
    return 0;
}
