#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pi  2 * acos (0.0)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        double r;
        cin>>r;
        double circle_red=pi*r*r;
        double rect_red=(r*2)*(r*2);
        double ans=rect_red-circle_red;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<ans<<endl;

    }
    return 0;
}
