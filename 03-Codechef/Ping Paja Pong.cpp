#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int ans=(n+m)/k;
        if(ans%2==1) cout<<"Paja"<<endl;
        else cout<<"Chef"<<endl;
    }
    return 0;
}
