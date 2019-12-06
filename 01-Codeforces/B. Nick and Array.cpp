#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,mx=INT_MIN;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i]=x;
        mx=max(mx,x);
    }
    if(n%2==0){
        for(int i=0;i<v.size();i++){
            if(v[i]<0) continue;
            else{
                v[i]=-v[i]-1;
            }
        }
        for(int i=0;i<v.size()-1;i++){
            cout<<v[i]<<" ";
        }
        cout<<v[v.size()-1]<<endl;
    }
    else{
        for(int i=0;i<v.size();i++){
            if(v[i]>=0) v[i]=-v[i]-1;
        }
        int low=v[0];
        int indix=0;
        for(int i=0;i<v.size();i++){
            if(v[i]<low){
                low=v[i];
                indix=i;
            }
        }
        v[indix]=-v[indix]-1;
        for(int i=0;i<v.size()-1;i++){
            cout<<v[i]<<" ";
        }
        cout<<v[v.size()-1]<<endl;
    }
    return 0;
}
