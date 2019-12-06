#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,sum=1,ar[11];
    memset(ar,0,sizeof(ar));
    cin>>n;
    vector<int> v(n),e;
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n-1;i++){
        if(ar[v[i]]==1) break;
        else{
            if(v[i]==v[i+1]) sum++;
            else{
                ar[v[i]]=1;
                e.push_back(sum);
                sum=1;
            }
        }
    }
    if(sum>1) e.push_back(sum);
    if(ar[v[n-1]]==0){
        if(v[n-1]!=v[n-2]){
            e.push_back(1);
        }
    }
    for(int i=0;i<e.size();i++){
        cout<<e[i]<<" ";
    }
    cout<<endl;
    return 0;
}
