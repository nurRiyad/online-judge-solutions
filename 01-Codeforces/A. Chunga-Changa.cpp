#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long  a,b,c;
    cin>>a>>b>>c;
    cout<<(a+b)/c<<" ";
    if((a%c)+(b%c)>=c) cout<<min(c-(a%c),c-(b%c))<<endl;
    else cout<<0<<endl;
    return 0;
}
