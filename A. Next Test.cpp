#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i;
    cin>>n;
    vector<int> v;
    v.push_back(0);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=1;i<v.size();i++){
        if(i==v[i]) continue;
        else{
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<i<<endl;
    return 0;
}
