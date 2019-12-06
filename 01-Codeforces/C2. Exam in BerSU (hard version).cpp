#include<bits/stdc++.h>
using namespace std;
int x[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,t,sum=0;
    cin>>n>>t;
    vector<int> v(n),ans;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int d=sum+v[i]-t,k=0;
        cout<<sum<<endl;
        cout<<"d=="<<d<<endl;
        if(d>0){
            for(int j=100;j>0;j--){
                int m=x[j]*j;
                if(d<m){
                    k+=(d+j-1)/j;
                    break;
                }
                k+=x[j];
                d-=m;
            }
        }
        sum+=v[i];
        x[v[i]]++;
        ans.push_back(k);
    }
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<ans[ans.size()-1]<<endl;
    return 0;
}
