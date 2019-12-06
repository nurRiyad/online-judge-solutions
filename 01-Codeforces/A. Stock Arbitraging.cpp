#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,m,r;
    cin>>n>>m>>r;
    vector<int> v(n),c(m);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<m;i++) cin>>c[i];
    sort(v.begin(),v.end());
    sort(c.begin(),c.end(),greater<int>());
    int sb=r/v[0];
    //cout<<sb<<endl;
    int baki=r%v[0];
    //cout<<baki<<endl;
    int bp=sb*v[0];
    //cout<<bp<<endl;
    int sp=c[0]*sb;
    //cout<<sp<<endl;
    int lav=sp+baki;
    //cout<<lav<<endl;
    cout<<max(lav,r)<<endl;
    return 0;
}
