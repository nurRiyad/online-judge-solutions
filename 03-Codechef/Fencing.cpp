#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long t;
    cin>>t;
    while(t--){
        long long  n,m,k;
        cin>>n>>m>>k;
        pair<long long,long long> p,q,r,s;
        vector<pair<long long,long long> > vp;
        for(long long i=0;i<k;i++){
            long long a,b;
            cin>>a>>b;
            vp.push_back(make_pair(a,b));
        }
        sort(vp.begin(),vp.end());
        long long sum=0,gar=0;
        for(long long i=0;i<vp.size();i++){
            long long a=vp[i].first;
            long long b=vp[i].second;
            p=make_pair(a,b+1);
            q=make_pair(a,b-1);
            r=make_pair(a+1,b);
            s=make_pair(a-1,b);
            if(binary_search(vp.begin(),vp.end(),p)) gar=0;
            else sum++;
            if(binary_search(vp.begin(),vp.end(),q)) gar=0;
            else sum++;
            if(binary_search(vp.begin(),vp.end(),r)) gar=0;
            else sum++;
            if(binary_search(vp.begin(),vp.end(),s)) gar=0;
            else sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
