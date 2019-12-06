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
    for(long long i=v.size()-1;i>0;i--){
        if(v[i]>v[i-1]) continue;
        else{
            long long x=v[i]-1;
            if(x<0) v[i-1]=0;
            else v[i-1]=x;
        }
    }
    long long sum=0;
    for(long long i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
    return 0;
}
