#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,sum=0;
    cin>>n;
    vector<int> v(n),c;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++){
        for(int j=2;j<v[i];j++){
            if(v[i]%j==0){
                int x=((v[i]-(v[i]/j))-((v[0]*j)-v[0]));
                //cout<<x<<" "<<v[i]<<" "<<j<<" "<<v[0]<<endl;
                if(x>0) c.push_back(x);
            }
        }
    }
    if(c.size()>0){
        sort(c.begin(),c.end());
        cout<<sum-c[c.size()-1]<<endl;
        return 0;
    }
    else cout<<sum<<endl;
    return 0;
}
