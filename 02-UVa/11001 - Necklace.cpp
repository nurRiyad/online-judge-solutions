#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    double vt,vn;
    while(cin>>vt>>vn){
        if(vt==0&&vn==0) break;
        double ans=0,com=0.0;
        for(ll i=1;;i++){
            double x=(double)vt/i;
            if(x<=vt) break;
            double eq=0.3*sqrt(x-vn);
            double feq=eq*i;
            cout<<feq<<endl;
            if(feq>=com){
                if(fabs(feq-com)<1e-12){
                    com=0;
                    ans=0;
                    break;
                }
                com=feq;
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
