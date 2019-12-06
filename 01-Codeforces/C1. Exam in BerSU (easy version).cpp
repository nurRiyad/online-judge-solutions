#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,t;
    cin>>n>>t;
    vector<int> v(n),ans;
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        vector<int> r;
        int sum=0;
        for(int j=0;j<i;j++){
            r.push_back(v[j]);
            sum+=v[j];
        }
        sum+=v[i];
        //cout<<sum<<endl;
        if(sum<=t) ans.push_back(0);
        else{
            //cout<<sum<<" ";
            //cout<<endl;
            sort(r.begin(),r.end(),greater<int>());
            //for(int p=0;p<r.size();p++) cout<<r[p]<<" ";
            //cout<<endl;
            for(int k=0;k<r.size();k++){
                sum=sum-r[k];
                if(sum<=t){
                    ans.push_back(k+1);
                    break;
                }
            }
        }
    }
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<ans[ans.size()-1]<<endl;
    return 0;
}
