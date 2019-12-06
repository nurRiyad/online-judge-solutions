#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,result;
        cin>>a>>b;
        stringstream ssa,ssb,sxa,sxb,ssc,ans;
        string sa,sb,sc;
        ssa<<a;
        ssa>>sa;
        ssb<<b;
        ssb>>sb;
        reverse(sa.begin(),sa.end());
        reverse(sb.begin(),sb.end());
        //cout<<sa<<" "<<sb<<endl;
        sxa<<sa;
        sxa>>a;
        sxb<<sb;
        sxb>>b;
        c=a+b;
        ssc<<c;
        ssc>>sc;
        reverse(sc.begin(),sc.end());
        ans<<sc;
        ans>>result;
        cout<<result<<endl;

    }
    return 0;
}
