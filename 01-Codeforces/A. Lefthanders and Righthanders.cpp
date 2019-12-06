#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    vector<pair<int,int> > vp;
    cin>>n;
    string a;
    cin>>a;
    for(int i=1;i<=n/2;i++){
        vp.push_back(make_pair(i,i+(n/2)));
    }
    for(int i=0;i<vp.size();i++){
        int x=vp[i].first;
        int y=vp[i].second;
        if(a[x-1]=='R'&&a[y-1]=='L'){
            cout<<y<<" "<<x<<endl;
        }
        else cout<<x<<" "<<y<<endl;
    }
    return 0;
}
