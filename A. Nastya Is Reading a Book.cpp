#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    vector<pair<int,int> > vp;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vp.push_back(make_pair(a,b));

    }
    int k,sum=0;
    cin>>k;
    for(int i=0;i<vp.size();i++){
        if(vp[i].first<k&&vp[i].second<k) sum++;
        else break;
    }
    cout<<n-sum<<endl;
    return 0;
}
