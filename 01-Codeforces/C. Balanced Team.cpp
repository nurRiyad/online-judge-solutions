#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    long long ans=INT_MIN;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        long long a=upper_bound(v.begin(),v.end(),v[i]+5)-v.begin();
        //cout<<a<<endl;
        a=a-(i+1)+1;
        ans=max(ans,a);
    }
    cout<<ans<<endl;
    return 0;
}
