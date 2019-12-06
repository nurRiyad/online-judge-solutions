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
        int n;
        cin>>n;
        vector<int> v,r;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            v.push_back(b-a);
            r.push_back(a+b);
        }
        int rmin=INT_MAX,vmin=INT_MAX;
        sort(v.begin(),v.end());
        sort(r.begin(),r.end());
        for(int i=0;i<n-1;i++){
            int x=abs(v[i]-v[i+1]);
            vmin=min(x,vmin);
            int y=abs(r[i]-r[i+1]);
            rmin=min(y,rmin);
        }
        double d=min(vmin,rmin);
        printf("%.7lf\n",d/2);
    }
    return 0;
}
