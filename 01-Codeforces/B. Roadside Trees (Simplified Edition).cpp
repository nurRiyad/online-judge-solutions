#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,t=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    t=v.size();
    t+=v.size()-1;
    t+=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]>=v[i-1]){
            t+=(v[i]-v[i-1]);
        }
        else{
            t+=(v[i-1]-v[i]);
        }
    }
    cout<<t<<endl;
    return 0;
}
