#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int khata=0;
    for(int i=0;i<v.size();i++){
        khata+=v[i];
        int x=khata/m;
        if(i!=(v.size()-1)) cout<<x<<" ";
        else cout<<x<<endl;
        khata=khata-(x*m);
    }
    return 0;
}
