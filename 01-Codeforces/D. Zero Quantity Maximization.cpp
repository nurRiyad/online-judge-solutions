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
    vector<double> v(n),r(n),c;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]==0) continue;
        else c.push_back(-r[i]/v[i]);
    }
    if(c.size()==0){
        cout<<0<<endl;
        return 0;
    }
    int sum=1,mx=0;
    sort(c.begin(),c.end());
    //for(int i=0;i<c.size();i++) cout<<c[i]<<" ";
    //cout<<endl;
    for(int i=0;i<c.size()-1;i++){
        if(c[i]==c[i+1]) sum++;
        else{
            mx=max(mx,sum);
            sum=1;
        }
    }
    mx=max(mx,sum);
    cout<<mx<<endl;
    return 0;
}
