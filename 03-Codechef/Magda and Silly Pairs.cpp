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
        long long n,sum=0;
        cin>>n;
        vector<int> v(n),r(n),x,y;
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0) x.push_back(v[i]);
            if(r[i]%2==0) y.push_back(r[i]);
        }
        for(int i=0;i<v.size();i++){
            if(v[i]%2==1) x.push_back(v[i]);
            if(r[i]%2==1) y.push_back(r[i]);
        }
        for(int i=0;i<n;i++){
            //cout<<x[i]<<" "<<y[i]<<endl;
            sum+=((x[i]+y[i])/2);
        }
        cout<<sum<<endl;
    }
    return 0;
}
